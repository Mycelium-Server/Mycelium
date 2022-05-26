#ifndef MYCELIUM_PACKET_H
#define MYCELIUM_PACKET_H

#include <memory>
#include <cmath>
#include "../Server.h"
#include "../Dimension.h"
#include "../Gamemode.h"
#include "../Keepalive.h"
#include "../Difficulty.h"
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

void sendPacket(uv_stream_t* s, const std::shared_ptr<PacketOut>& packet) {
    ByteBuffer buf;
    ByteBuffer packet_buf;
    packet->encode(packet_buf);
    int packet_id = packet->getPacketID();
    buf.writeVarInt((int)sizeofVarInt(packet_id) + (int)packet_buf.bytes.size());
    buf.writeVarInt(packet->getPacketID());
    buf.writeByteBuffer(packet_buf);
    write(s, buf);
    printf("Sent packet: 0x%x\n", packet->getPacketID());
}

std::map<uv_stream_t*, int> next_state;

unsigned int handlePacket(uv_stream_t* s, ByteBuffer buf) {
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

                PacketOutLoginSuccess login_success;
                login_success.username = login_start.name;
                login_success.uuid = UUID_t(unique_random(), unique_random());
                sendPacket(s, std::make_shared<PacketOutLoginSuccess>(login_success));

                PacketOutJoinGame join_game;
                join_game.entity_id = 0;
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

                con_to_player[s].uuid = login_success.uuid;
                con_to_player[s].name = login_success.username;

                PacketOutPluginMessage plugin_message_brand;
                plugin_message_brand.channel = get_channel(INTERNAL_BRAND);
                plugin_message_brand.data.writeString("Mycelium");
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

                Location_t player_loc(0, 400, 0);

                PacketOutPositionAndLook position_and_look;
                position_and_look.x = (double)player_loc.x;
                position_and_look.y = (double)player_loc.y;
                position_and_look.z = (double)player_loc.z;
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

                Block block(true, false, true, minecraft_bedrock);
                PacketOutChunk chunk_data;
                for(int x = 0; x < 4; ++x) {
                    for(int y = 0; y < 4; ++y) {
                        for (int z = 0; z < 4; ++z) {
                            for (auto& section : chunk_data.chunk.sections)
                                section->set_biome(x, y, z, Biome(minecraft_plains));
                        }
                    }
                }
                for(int x = 0; x < 16; ++x) {
                    for(int z = 0; z < 16; ++z) {
                        for(int y = 0; y < 16; ++y) {
                            for (auto& section : chunk_data.chunk.sections)
                                section->set_block(x, y, z, block);
                        }
                    }
                }
                for(int chunk_x = -3; chunk_x <= 3; chunk_x++) {
                    for(int chunk_z = -3; chunk_z <= 3; chunk_z++) {
                        chunk_data.chunk.chunk_x = chunk_x;
                        chunk_data.chunk.chunk_z = chunk_z;
                        sendPacket(s, std::make_shared<PacketOutChunk>(chunk_data));
                    }
                }

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
                spawn_position.location = player_loc;
                spawn_position.angle = 0;
                sendPacket(s, std::make_shared<PacketOutSpawnPosition>(spawn_position));

                PacketOutPlayerInfo player_info_add_player;
                player_info_add_player.action = PacketOutPlayerInfo::ACTION_ADD_PLAYER;
                PacketOutPlayerInfo::AddPlayer add_player;
                add_player.name = login_start.name;
                add_player.gamemode = join_game.gamemode;
                add_player.ping = -1;
                add_player.has_display_name = false;
                PacketOutPlayerInfo::PlayerAction player_add_player;
                player_add_player.uuid = login_success.uuid;
                player_add_player.action = std::make_shared<PacketOutPlayerInfo::AddPlayer>(add_player);
                player_info_add_player.player.push_back(player_add_player);
                sendPacket(s, std::make_shared<PacketOutPlayerInfo>(player_info_add_player));

                // Teleport confirm
                // Client Status ????
                // etc

                add_keepalive_target(s);
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
        }

        case 0x0F: {
            printf("Packet Type: Keep Alive\n");
            PacketInKeepalive keepalive;
            keepalive.read(buf);
            handle_keepalive_response(s, keepalive);
        }

        default:
            printf("Unknown Packet ID [0x%x]\n", packet_id);
            break;
    }
    return length + sizeofVarInt(length);
}

#endif //MYCELIUM_PACKET_H
