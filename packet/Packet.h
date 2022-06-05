#ifndef MYCELIUM_PACKET_H
#define MYCELIUM_PACKET_H

#include <memory>
#include <cmath>
#include <regex>
#include "../Server.h"
#include "../Dimension.h"
#include "../Gamemode.h"
#include "../Keepalive.h"
#include "../Difficulty.h"
#include "../Encryption.h"
#include "../MojangAPI.h"
#include "../random.h"
#include "PacketInHandshake.h"
#include "PacketOutStatusResponse.h"
#include "PacketOutPong.h"
#include "PacketInPing.h"
#include "PacketInLoginStart.h"
#include "PacketOutLoginSuccess.h"
#include "PacketOutJoinGame.h"
#include "PacketOutPluginMessage.h"
#include "PacketInClientSettings.h"
#include "PacketOutDifficulty.h"
#include "PacketOutPlayerAbilities.h"
#include "PacketOutHeldItemChange.h"
#include "PacketOutPlayerInfo.h"
#include "PacketOutUpdateViewPosition.h"
#include "PacketOutChunk.h"
#include "PacketOutInitializeWorldBorder.h"
#include "PacketOutSpawnPosition.h"
#include "PacketOutPositionAndLook.h"
#include "PacketInChatMessage.h"
#include "PacketOutChatMessage.h"
#include "PacketOutSpawnPlayer.h"
#include "PacketInPlayerPosition.h"
#include "PacketOutEntityPostionAndRotation.h"
#include "PacketInPlayerPositionAndRotation.h"
#include "PacketOutFace.h"
#include "PacketOutEntityHeadLook.h"
#include "PacketOutEntityPosition.h"
#include "PacketInPlayerRotation.h"
#include "PacketOutEntityRotation.h"
#include "PacketInEntityAction.h"
#include "PacketOutEntityMetadata.h"
#include "PacketOutDestroyEntities.h"
#include "PacketOutLoginDisconnect.h"
#include "PacketInClickWindow.h"
#include "PacketInPlayerBlockPlacement.h"
#include "PacketOutBlockChange.h"
#include "PacketOutEncryptionRequest.h"
#include "PacketInEncryptionResponse.h"

enum State {
    STATE_LOGIN = 0,
    STATE_PLAY = 1,
};

static std::vector<std::shared_ptr<Player>> pending_checks;
static std::map<uv_stream_t*, State> player_states;
static std::map<uv_stream_t*, std::vector<std::shared_ptr<PacketIn>>> pending_packets;
static std::map<uv_stream_t*, int> encryption_requests;
static std::map<uv_stream_t*, PacketInLoginStart> login;
static std::map<uv_stream_t*, AES_CFB8_Data> encryption_contexts;
static std::map<uv_stream_t*, int> next_state;

static bool check_state(uv_stream_t* s) {
    return player_states[s] != STATE_PLAY;
}

#define QUEUED_PLAY_PACKET_BEGIN(Packet_T, buf, packet_name, s)              \
    Packet_T queued_packet;                                                  \
    queued_packet.read(buf);                                                 \
    pending_packets[s].push_back(std::make_shared<Packet_T>(queued_packet)); \
    if(check_state(s)) break;                                                \
    int __idx = 0;                                                           \
    std::vector<int> __idx_tr;                                               \
    for(auto& packet : pending_packets[s]) {                                 \
        if(packet->getPacketID() == queued_packet.getPacketID()) {           \
            Packet_T packet_name = *reinterpret_cast<Packet_T*>(packet.get());
#define QUEUED_PLAY_PACKET_END()                                    \
            __idx_tr.push_back(__idx);                              \
        } __idx++;                                                  \
}                                                                   \
    for(int idx : __idx_tr) {                                       \
        pending_packets[s].erase(pending_packets[s].begin() + idx); \
    }

void sendPacket(uv_stream_t* s, const std::shared_ptr<PacketOut>& packet) {
    ByteBuffer buf;

    ByteBuffer packet_buf;
    packet->encode(packet_buf);

    int packet_id = packet->getPacketID();
    buf.writeVarInt((int)sizeofVarInt(packet_id) + (int)packet_buf.bytes.size());
    buf.writeVarInt(packet->getPacketID());
    buf.writeByteBuffer(packet_buf);

    ByteBuffer encrypted = buf;
    if(encryption_contexts.find(s) != encryption_contexts.end()) {
        encrypted = aes_encrypt(encryption_contexts[s], buf);
    }

    write(s, encrypted);

    printf("Sent packet: 0x%x\n", packet->getPacketID());
}

static void pre_login(uv_stream_t* s, const JSON& profile) {
    PacketOutLoginSuccess login_success;
    login_success.username = login[s].name;
    login_success.uuid = UUID_t(JSON_STRING(JSON_OBJECT(profile).elements["id"]).value);
    sendPacket(s, std::make_shared<PacketOutLoginSuccess>(login_success));

    player_states[s] = STATE_LOGIN;

    PacketOutJoinGame join_game;
    join_game.entity_id = rand();
    join_game.is_hardcore = false;
    join_game.gamemode = GM_CREATIVE;
    join_game.previous_gamemode = PREV_GM_DEFAULT;
    join_game.world_count = (int)default_dimension_names().size();
    join_game.dimension_names = default_dimension_names();
    join_game.dimension_codec = default_dimension_codec();
    join_game.dimension = get_dimension_nbt(WORLD_OVERWORLD);
    join_game.dimension_name = default_world_name(WORLD_OVERWORLD);
    join_game.hashed_seed = 0;
    join_game.max_players = 0;
    join_game.view_distance = 10;
    join_game.simulation_distance = 10;
    join_game.reduced_debug_info = false;
    join_game.enable_respawn_screen = true;
    join_game.is_debug = false;
    join_game.is_flat = false;
    sendPacket(s, std::make_shared<PacketOutJoinGame>(join_game));

    Location player_loc(0, 50, 0, 0, 0);

    Player player;
    player.uuid = login_success.uuid;
    player.name = login_success.username;
    player.profile = profile;
    player.connection = s;
    player.gamemode = (GAMEMODE)join_game.gamemode;
    player.location = player_loc;
    player.entity_id = join_game.entity_id;
    player.metadata = std::make_shared<EntityMetadata>();

    PacketOutPluginMessage plugin_message_brand;
    plugin_message_brand.channel = get_channel(INTERNAL_BRAND);
    plugin_message_brand.data.writeString(get_brand());
    sendPacket(s, std::make_shared<PacketOutPluginMessage>(plugin_message_brand));

    PacketOutDifficulty difficulty;
    difficulty.difficulty = DIFFICULTY_NORMAL;
    difficulty.difficulty_locked = true;
    sendPacket(s, std::make_shared<PacketOutDifficulty>(difficulty));

    PacketOutPlayerAbilities player_abilities;
    player_abilities.flags.allow_flying = true;
    player_abilities.flags.creative_mode = true;
    player_abilities.flags.flying = false;
    player_abilities.flags.invulnerable = true;
    player_abilities.flying_speed = PacketOutPlayerAbilities::DEFAULT_FLYING_SPEED;
    player_abilities.field_of_view_modifier = PacketOutPlayerAbilities::DEFAULT_FIELD_OF_VIEW_MODIFIER;
    sendPacket(s, std::make_shared<PacketOutPlayerAbilities>(player_abilities));

    PacketOutHeldItemChange held_item_change;
    held_item_change.slot = 4;
    sendPacket(s, std::make_shared<PacketOutHeldItemChange>(held_item_change));

    // Declare recipes
    // Tags
    // Entity Status
    // Declare commands
    // Unlock recipes

    PacketOutPositionAndLook position_and_look;
    position_and_look.x = player_loc.x;
    position_and_look.y = player_loc.y;
    position_and_look.z = player_loc.z;
    position_and_look.flags.value = 0;
    position_and_look.yaw = 0;
    position_and_look.pitch = 0;
    position_and_look.teleport_id = rand();
    position_and_look.dismount_vehicle = false;
    sendPacket(s, std::make_shared<PacketOutPositionAndLook>(position_and_look));

    PacketOutUpdateViewPosition update_view_position;
    update_view_position.chunk_x = floor((double)player_loc.x / 16.0);
    update_view_position.chunk_z = floor((double)player_loc.z / 16.0);
    sendPacket(s, std::make_shared<PacketOutUpdateViewPosition>(update_view_position));

    // Update light

    overworld->send(s);

    PacketOutInitializeWorldBorder world_border;
    world_border.x = 0;
    world_border.z = 0;
    world_border.old_diameter = 320;
    world_border.new_diameter = 320;
    world_border.speed = 0;
    world_border.portal_teleport_boundary = PacketOutInitializeWorldBorder::DEFAULT_PORTAL_TELEPORT_BOUNDARY;
    world_border.warning_blocks = 0;
    world_border.warning_time = 0;
    sendPacket(s, std::make_shared<PacketOutInitializeWorldBorder>(world_border));

    PacketOutSpawnPosition spawn_position;
    spawn_position.location = player_loc.c_location();
    spawn_position.angle = 0;
    sendPacket(s, std::make_shared<PacketOutSpawnPosition>(spawn_position));

    pending_checks.push_back(std::make_shared<Player>(player));

    PacketOutKeepalive keepalive;
    uv_timeval64_t tv;
    uv_gettimeofday(&tv);
    long long millis = tv.tv_sec * 1000 + tv.tv_usec / 1000;
    keepalive.keep_alive_id = (long)millis;
    sendPacket(s, std::make_shared<PacketOutKeepalive>(keepalive));
    login.erase(login.find(s));
}

static void continue_log_in(std::shared_ptr<Player>& player) {
    con_to_player[player->connection] = player;
    players.push_back(player);

    PacketOutChatMessage join_message;
    join_message.uuid = UUID_t(0, 0);
    join_message.position = 0;
    join_message.json_data = R"({"text":")"+player->name+R"( joined the game","color":"aqua"})";

    for(auto& p : players) {
        sendPacket(p->connection, std::make_shared<PacketOutChatMessage>(join_message));
    }

    PacketOutPlayerInfo player_info_add_player;
    player_info_add_player.action = PacketOutPlayerInfo::ACTION_ADD_PLAYER;
    PacketOutPlayerInfo::AddPlayer add_player;
    add_player.name = player->name;
    add_player.gamemode = player->gamemode;
    add_player.ping = -1;
    add_player.has_display_name = false;
    {
        JSON tmp = JSON_OBJECT(player->profile)["properties"];
        if (tmp) {
            for (const JSON &raw_prop: JSON_ARRAY(tmp).elements) {
                JSON_Object prop = JSON_OBJECT(raw_prop);
                PacketOutPlayerInfo::AddPlayer::Property property;
                property.name = JSON_STRING(prop["name"]).value;
                property.value = JSON_STRING(prop["value"]).value;
                property.is_signed = true;
                property.signature = JSON_STRING(prop["signature"]).value;
                add_player.propeperty.push_back(property);
            }
        }
    }
    PacketOutPlayerInfo::PlayerAction player_add_player;
    player_add_player.uuid = player->uuid;
    player_add_player.action = std::make_shared<PacketOutPlayerInfo::AddPlayer>(add_player);
    player_info_add_player.player.push_back(player_add_player);

    for(auto& p : players) {
        if(p->name != con_to_player[player->connection]->name)
            sendPacket(p->connection, std::make_shared<PacketOutPlayerInfo>(player_info_add_player));
    }

    for(auto& p : players) {
        PacketOutPlayerInfo player_info_add_other_player;
        player_info_add_other_player.action = PacketOutPlayerInfo::ACTION_ADD_PLAYER;
        PacketOutPlayerInfo::AddPlayer add_other_player;
        add_other_player.name = p->name;
        add_other_player.gamemode = p->gamemode;
        add_other_player.ping = -1;
        add_other_player.has_display_name = false;
        {
            JSON tmp = JSON_OBJECT(p->profile)["properties"];
            if (tmp) {
                for (const JSON &raw_prop: JSON_ARRAY(tmp).elements) {
                    JSON_Object prop = JSON_OBJECT(raw_prop);
                    PacketOutPlayerInfo::AddPlayer::Property property;
                    property.name = JSON_STRING(prop["name"]).value;
                    property.value = JSON_STRING(prop["value"]).value;
                    property.is_signed = true;
                    property.signature = JSON_STRING(prop["signature"]).value;
                    add_other_player.propeperty.push_back(property);
                }
            }
        }
        PacketOutPlayerInfo::PlayerAction player_add_other_player;
        player_add_other_player.uuid = p->uuid;
        player_add_other_player.action = std::make_shared<PacketOutPlayerInfo::AddPlayer>(add_other_player);
        player_info_add_other_player.player.push_back(player_add_other_player);
        sendPacket(player->connection, std::make_shared<PacketOutPlayerInfo>(player_info_add_other_player));
    }

    PacketOutSpawnPlayer spawn_player;
    spawn_player.entity_id = player->entity_id;
    spawn_player.player_uuid = player->uuid;
    spawn_player.x = player->location.x;
    spawn_player.y = player->location.y;
    spawn_player.z = player->location.z;
    spawn_player.yaw = 0;
    spawn_player.pitch = 0;

    for(auto& p : players) {
        if(p->connection != player->connection) {
            sendPacket(p->connection, std::make_shared<PacketOutSpawnPlayer>(spawn_player));

            PacketOutSpawnPlayer spawn_other_player;
            spawn_other_player.entity_id = p->entity_id;
            spawn_other_player.player_uuid = p->uuid;
            spawn_other_player.x = p->location.x;
            spawn_other_player.y = p->location.y;
            spawn_other_player.z = p->location.z;
            spawn_other_player.yaw = p->location.yaw_as_angle();
            spawn_other_player.pitch = p->location.pitch_as_angle();
            sendPacket(player->connection, std::make_shared<PacketOutSpawnPlayer>(spawn_other_player));
        }
    }

    // Teleport confirm
    // Client Status ????
    // etc

    for(auto& p : players) {
        PacketOutEntityMetadata metadata_packet;
        metadata_packet.entity_id = p->entity_id;
        metadata_packet.metadata = p->metadata;
        sendPacket(player->connection, std::make_shared<PacketOutEntityMetadata>(metadata_packet));
    }

    add_keepalive_target(player->connection);
    player_states[player->connection] = STATE_PLAY;
}

static void handle_encryption_response(uv_stream_t* s, PacketInEncryptionResponse& response) {
    int verify_token = encryption_requests[s];
    encryption_requests.erase(encryption_requests.find(s));
    ByteBuffer d_vt = rsa_decrypt(keypair, response.verify_token);
    if(d_vt.bytes.size() != 4) {
        fprintf(stderr, "handle_encryption_response: verify token length did not match\n");
        return;
    }
    if(verify_token != d_vt.readInt()) {
        fprintf(stderr, "handle_encryption_response: verify token did not match\n");
        return;
    }
    printf("handle_encryption_response: verify token: ok\n");
    ByteBuffer shared_secret = rsa_decrypt(keypair, response.shared_secret);
    printf("handle_encryption_response: shared secret: ok\n");
    encryption_contexts[s] = initialize_aes_encryption(shared_secret);
    printf("handle_encryption_response: initialized AES/CFB8 context\n");

    JSON profile;
    int http_code = mojang_request_authentication(&profile, login[s].name, server_id_hash(shared_secret));
    if(http_code != 200) {
        PacketOutLoginDisconnect disconnect;
        disconnect.reason = R"({"text":"Failed to verify username ()"+std::to_string(http_code)+")\"}";
        sendPacket(s, std::make_shared<PacketOutLoginDisconnect>(disconnect));
        return;
    }

    pre_login(s, profile);
}

ByteBuffer decryptPacket(uv_stream_t* s, const ByteBuffer& buf) {
    if(!encryption_contexts.contains(s)) return buf;
    return aes_decrypt(encryption_contexts[s], buf);
}

unsigned int handlePacket(uv_stream_t* s, ByteBuffer& buf) {
    process_keepalive(s);

    int length = buf.readVarInt();
    int packet_id = buf.readVarInt();
    printf("Packet Length: %d\n", length);
    printf("Packet ID: %d [0x%x]\n", packet_id, packet_id);
    switch(packet_id) {
        case 0x00: {
            if(next_state[s] == 1) {
                next_state[s] = 0;
                printf("Packet Type: Request\n");
                PacketOutStatusResponse response;
                response.version.name = "1.18.2";
                response.version.protocol = 758;
                response.players.max = 1;
                response.players.online = -4;
                response.description.text = "§aHello world; test server core";
                sendPacket(s, std::make_shared<PacketOutStatusResponse>(response));
            } else if(next_state[s] == 2) {
                next_state[s] = 0;
                printf("Packet Type: Login Start\n");
                PacketInLoginStart login_start;
                login_start.read(buf);
                printf("Name: %s\n", login_start.name.data());
                for(auto& p : players) {
                    if(p->name == login_start.name) {
                        PacketOutLoginDisconnect disconnect;
                        disconnect.reason = "{\"text\":\"Player '"+login_start.name+"' is already playing on this server!\"}";
                        sendPacket(s, std::make_shared<PacketOutLoginDisconnect>(disconnect));
                        break;
                    }
                }

                PacketOutEncryptionRequest encryption_request;
                encryption_request.verify_token = rand();
                encryption_request.public_key = keypair.key_public_der;

                login[s] = login_start;
                encryption_requests[s] = encryption_request.verify_token;

                sendPacket(s, std::make_shared<PacketOutEncryptionRequest>(encryption_request));
            }
            else {
                printf("Packet Type: Handshake\n");
                PacketInHandshake handshake;
                handshake.read(buf);
                next_state[s] = handshake.next_state;
            }
            break;
        }

        case 0x01: {
            if(encryption_requests.find(s) != encryption_requests.end()) {
                printf("Packet Type: Encryption Response\n");
                PacketInEncryptionResponse response;
                response.read(buf);
                handle_encryption_response(s, response);
                break;
            }

            printf("Packet Type: Ping\n");
            PacketInPing ping;
            ping.read(buf);
            PacketOutPong pong;
            pong.payload = ping.payload;
            sendPacket(s, std::make_shared<PacketOutPong>(pong));
            break;
        }

        case 0x05: {
            printf("Packet Type: Client Settings\n");
            PacketInClientSettings client_settings;
            client_settings.read(buf);
            printf("Locale: %s\n", client_settings.locale.data());
            printf("View Distance: %d\n", client_settings.view_distance);
            printf("Chat Mode: %d\n", client_settings.chat_mode);
            printf("Chat Colors: %d\n", client_settings.chat_colors);
            printf("Displayed Skin Parts: Cape: %d\n", client_settings.displayed_skin_parts.cape_enabled);
            printf("Displayed Skin Parts: Jacket: %d\n", client_settings.displayed_skin_parts.jacket_enabled);
            printf("Displayed Skin Parts: Left Sleeve: %d\n", client_settings.displayed_skin_parts.left_sleeve_enabled);
            printf("Displayed Skin Parts: Right Sleeve: %d\n", client_settings.displayed_skin_parts.right_sleeve_enabled);
            printf("Displayed Skin Parts: Left Pants Leg: %d\n", client_settings.displayed_skin_parts.left_pants_leg_enabled);
            printf("Displayed Skin Parts: Right Pants Leg: %d\n", client_settings.displayed_skin_parts.right_pants_leg_enabled);
            printf("Displayed Skin Parts: Hat: %d\n", client_settings.displayed_skin_parts.hat_enabled);
            printf("Main Hand: %d\n", client_settings.main_hand);
            printf("Enable Text Filtering: %d\n", client_settings.enable_text_filtering);
            printf("Allow server listings: %d\n", client_settings.allow_server_listings);
            break;
        }

        case 0x0F: {
            printf("Packet Type: Keep Alive\n");
            int index_to_remove = -1;
            for(int i = 0; i < pending_checks.size(); i++) {
                auto& p = pending_checks[i];
                if(p->connection == s) {
                    continue_log_in(p);
                    index_to_remove = i;
                    break;
                }
            }
            if(index_to_remove >= 0) {
                pending_checks.erase(pending_checks.begin() + index_to_remove);
            }

            PacketInKeepalive keepalive;
            keepalive.read(buf);
            handle_keepalive_response(s, keepalive);
            break;
        }

        case 0x03: {
            if(player_states[s] != STATE_PLAY) break;
            printf("Packet Type: Chat Message\n");
            PacketInChatMessage chat_message_in;
            chat_message_in.read(buf);
            if(chat_message_in.message.length() > 0 && chat_message_in.message[0] == '/') {
                PacketOutChatMessage chat_message_out;
                chat_message_out.json_data = "{\"text\":\"Command not found.\",\"color\":\"red\"}";
                chat_message_out.position = 0;
                chat_message_out.uuid = UUID_t(0, 0);
                sendPacket(s, std::make_shared<PacketOutChatMessage>(chat_message_out));
                break;
            }
            chat_message_in.message = std::regex_replace(chat_message_in.message, std::regex("\\\\"), "\\\\");
            chat_message_in.message = std::regex_replace(chat_message_in.message, std::regex(R"(")"), "\\\"");
            PacketOutChatMessage chat_message_out;
            chat_message_out.json_data = "{\"text\": \"["+con_to_player[s]->name+"] "+chat_message_in.message+"\"}";
            chat_message_out.position = 0;
            chat_message_out.uuid = UUID_t(0, 0);
            for(auto& p : players) {
                sendPacket(p->connection, std::make_shared<PacketOutChatMessage>(chat_message_out));
            }
            break;
        }

        case 0x11: {
            printf("Packet Type: Player Position\n");
            QUEUED_PLAY_PACKET_BEGIN(PacketInPlayerPosition, buf, player_position_in, s)
            double prev_x = con_to_player[s]->location.x;
            double prev_y = con_to_player[s]->location.y;
            double prev_z = con_to_player[s]->location.z;
            con_to_player[s]->location.x = player_position_in.x;
            con_to_player[s]->location.y = player_position_in.feet_y;
            con_to_player[s]->location.z = player_position_in.z;
            for (auto &p: players) {
                if (p->connection == s) {
                    p->location = con_to_player[s]->location;
                }
            }

            PacketOutEntityPosition player_position;
            player_position.entity_id = con_to_player[s]->entity_id;
            player_position.delta_x = (short) ((player_position_in.x * 32 - prev_x * 32) * 128);
            player_position.delta_y = (short) ((player_position_in.feet_y * 32 - prev_y * 32) * 128);
            player_position.delta_z = (short) ((player_position_in.z * 32 - prev_z * 32) * 128);
            player_position.on_ground = player_position_in.on_ground;
            for (auto &p: players) {
                if (p->connection != s) {
                    sendPacket(p->connection, std::make_shared<PacketOutEntityPosition>(player_position));
                }
            }
            QUEUED_PLAY_PACKET_END()
            break;
        }

        case 0x12: {
            printf("Packet Type: Player Position And Rotation\n");
            QUEUED_PLAY_PACKET_BEGIN(PacketInPlayerPositionAndRotation, buf, player_position_in, s)
            double prev_x = con_to_player[s]->location.x;
            double prev_y = con_to_player[s]->location.y;
            double prev_z = con_to_player[s]->location.z;
            con_to_player[s]->location.x = player_position_in.x;
            con_to_player[s]->location.y = player_position_in.feet_y;
            con_to_player[s]->location.z = player_position_in.z;
            con_to_player[s]->location.yaw = player_position_in.yaw/360.f;
            con_to_player[s]->location.pitch = player_position_in.pitch/360.f;
            for(auto& p : players) {
                if(p->connection == s) {
                    p->location = con_to_player[s]->location;
                }
            }

            PacketOutEntityPositionAndRotation player_position;
            player_position.entity_id = con_to_player[s]->entity_id;
            player_position.delta_x = (short)((player_position_in.x * 32 - prev_x * 32) * 128);
            player_position.delta_y = (short)((player_position_in.feet_y * 32 - prev_y * 32) * 128);
            player_position.delta_z = (short)((player_position_in.z * 32 - prev_z * 32) * 128);
            player_position.yaw = con_to_player[s]->location.yaw_as_angle();
            player_position.pitch = con_to_player[s]->location.pitch_as_angle();
            player_position.on_ground = player_position_in.on_ground;

            PacketOutEntityHeadLook player_look;
            player_look.entity_id = player_position.entity_id;
            player_look.head_yaw = player_position.yaw;

            for(auto& p : players) {
                if(p->connection != s) {
                    sendPacket(p->connection, std::make_shared<PacketOutEntityPositionAndRotation>(player_position));
                    sendPacket(p->connection, std::make_shared<PacketOutEntityHeadLook>(player_look));
                }
            }
            QUEUED_PLAY_PACKET_END()
            break;
        }

        case 0x13: {
            printf("Packet Type: Player Rotation\n");
            QUEUED_PLAY_PACKET_BEGIN(PacketInPlayerRotation, buf, player_rotation_in, s)
            con_to_player[s]->location.yaw = player_rotation_in.yaw/360.f;
            con_to_player[s]->location.pitch = player_rotation_in.pitch/360.f;
            for(auto& p : players) {
                if(p->connection == s) {
                    p->location = con_to_player[s]->location;
                }
            }

            PacketOutEntityRotation player_rotation;
            player_rotation.entity_id = con_to_player[s]->entity_id;
            player_rotation.yaw = con_to_player[s]->location.yaw_as_angle();
            player_rotation.pitch = con_to_player[s]->location.pitch_as_angle();
            player_rotation.on_ground = player_rotation_in.on_ground;

            PacketOutEntityHeadLook player_look;
            player_look.entity_id = player_rotation.entity_id;
            player_look.head_yaw = player_rotation.yaw;

            for(auto& p : players) {
                if(p->connection != s) {
                    sendPacket(p->connection, std::make_shared<PacketOutEntityRotation>(player_rotation));
                    sendPacket(p->connection, std::make_shared<PacketOutEntityHeadLook>(player_look));
                }
            }
            QUEUED_PLAY_PACKET_END()
            break;
        }

        case 0x1B: {
            printf("Packet Type: Entity Action\n");
            QUEUED_PLAY_PACKET_BEGIN(PacketInEntityAction, buf, entity_action, s)
            auto& player = Player::from_entity_id(entity_action.entity_id);
            switch(entity_action.action_id) {
                case PacketInEntityAction::START_SNEAKING: {
                    PacketOutEntityMetadata metadata_packet;
                    player->metadata->bitfield.is_crouching = 1;
                    player->metadata->pose = POSE_SNEAKING;
                    metadata_packet.entity_id = player->entity_id;
                    metadata_packet.metadata = player->metadata;
                    for(auto& p : players) {
                        sendPacket(p->connection, std::make_shared<PacketOutEntityMetadata>(metadata_packet));
                    }
                    break;
                }

                case PacketInEntityAction::STOP_SNEAKING: {
                    PacketOutEntityMetadata metadata_packet;
                    player->metadata->bitfield.is_crouching = 0;
                    player->metadata->pose = POSE_STANDING;
                    metadata_packet.entity_id = player->entity_id;
                    metadata_packet.metadata = player->metadata;
                    for(auto& p : players) {
                        sendPacket(p->connection, std::make_shared<PacketOutEntityMetadata>(metadata_packet));
                    }
                    break;
                }

                case PacketInEntityAction::START_SPRINTING: {
                    PacketOutEntityMetadata metadata_packet;
                    player->metadata->bitfield.is_sprinting = 1;
                    metadata_packet.entity_id = player->entity_id;
                    metadata_packet.metadata = player->metadata;
                    for(auto& p : players) {
                        sendPacket(p->connection, std::make_shared<PacketOutEntityMetadata>(metadata_packet));
                    }
                    break;
                }

                case PacketInEntityAction::STOP_SPRINTING: {
                    PacketOutEntityMetadata metadata_packet;
                    player->metadata->bitfield.is_sprinting = 0;
                    metadata_packet.entity_id = player->entity_id;
                    metadata_packet.metadata = player->metadata;
                    for(auto& p : players) {
                        sendPacket(p->connection, std::make_shared<PacketOutEntityMetadata>(metadata_packet));
                    }
                    break;
                }
            }
            QUEUED_PLAY_PACKET_END()
            break;
        }

        case 0x08: {
            printf("Packet Type: Click Window\n");
            QUEUED_PLAY_PACKET_BEGIN(PacketInClickWindow, buf, click_window, s)
            for(const PacketInClickWindow::slot_t& slot : click_window.slots) {
                con_to_player[s]->inventory.items[slot.slot_number] = slot.slot_data;
            }
            QUEUED_PLAY_PACKET_END()
            break;
        }

        case 0x2E: {
            printf("Packet Type: Player Block Placement\n");
            QUEUED_PLAY_PACKET_BEGIN(PacketInPlayerBlockPlacement, buf, block_placement, s)
            uv_sleep(50);
            PacketOutBlockChange block_change_packet;
            block_change_packet.chunk_section_position = {
                    (int)block_placement.block_position.x,
                    (int)block_placement.block_position.y,
                    (int)block_placement.block_position.z
            };
            block_change_packet.trust_edges = true;
            for(int x = -1; x <= 1; x++) {
                for(int y = -1; y <= 1; y++) {
                    for(int z = -1; z <= 1; z++) {
                        Location_t loc = block_placement.block_position + Location_t(x,y,z);
                        PacketOutBlockChange::changed_block changed;
                        changed.x = loc.x;
                        changed.y = loc.y;
                        changed.z = loc.z;
                        changed.block_id = block_minecraft_bedrock;
                        block_change_packet.blocks.push_back(changed);
                    }
                }
            }
            int idx = overworld->set_block(block_placement.block_position.x,
                                           block_placement.block_position.y,
                                           block_placement.block_position.z,
                                           Block(true, false, true, block_minecraft_bedrock));
            overworld->update_packet(idx);
            for (auto &p: players) {
                sendPacket(p->connection, std::make_shared<PacketOutBlockChange>(block_change_packet));
            }
            QUEUED_PLAY_PACKET_END()
            break;
        }

        default:
            printf("Unknown Packet ID [0x%x]\n", packet_id);
            break;
    }
    return length + sizeofVarInt(length);
}

void handleDisconnect(uv_stream_t* handle) {
    int pc_idx = -1;
    for(int i = 0; i < pending_checks.size(); i++) {
        if(pending_checks[i]->connection == handle) {
            pc_idx = i;
            break;
        }
    }
    if(pc_idx != -1) pending_checks.erase(pending_checks.begin() + pc_idx);

    if(player_states.contains(handle))
        player_states.erase(player_states.find(handle));
    if(encryption_requests.contains(handle))
        encryption_requests.erase(encryption_requests.find(handle));
    if(login.contains(handle))
        login.erase(login.find(handle));
    if(encryption_contexts.contains(handle))
        encryption_contexts.erase(encryption_contexts.find(handle));

    int index = -1;
    for(int i = 0; i < players.size(); i++) {
        if(players[i]->connection == handle) {
            index = i;
            break;
        }
    }
    if(index < 0) return;

    PacketOutDestroyEntities destroy_entity;
    destroy_entity.entity_ids.push_back(players[index]->entity_id);

    PacketOutPlayerInfo remove_player;
    remove_player.action = PacketOutPlayerInfo::ACTION_REMOVE_PLAYER;
    PacketOutPlayerInfo::RemovePlayer action;
    PacketOutPlayerInfo::PlayerAction player_action;
    player_action.action = std::make_shared<PacketOutPlayerInfo::RemovePlayer>(action);
    player_action.uuid = players[index]->uuid;
    remove_player.player.push_back(player_action);

    PacketOutChatMessage left_message;
    left_message.uuid = UUID_t(0, 0);
    left_message.position = 0;
    left_message.json_data = "{\"text\":\""+players[index]->name+" left the game\",\"color\":\"light_purple\"}";

    con_to_player.erase(players[index]->connection);
    players.erase(players.begin() + index);

    for(auto& p : players) {
        sendPacket(p->connection, std::make_shared<PacketOutDestroyEntities>(destroy_entity));
        sendPacket(p->connection, std::make_shared<PacketOutPlayerInfo>(remove_player));
        sendPacket(p->connection, std::make_shared<PacketOutChatMessage>(left_message));
    }

}

#endif //MYCELIUM_PACKET_H
