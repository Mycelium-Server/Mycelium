#ifndef MYCELIUM_PACKET_H
#define MYCELIUM_PACKET_H

#include <memory>
#include "../Server.h"
#include "../Dimension.h"
#include "../Gamemode.h"
#include "../Keepalive.h"
#include "PacketInHandshake.h"
#include "PacketOutStatusResponse.h"
#include "PacketOutPong.h"
#include "PacketInPing.h"
#include "PacketInLoginStart.h"
#include "PacketOutLoginSuccess.h"
#include "PacketOutJoinGame.h"
#include "PacketOutPluginMessage.h"

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

void handlePacket(uv_stream_t* s, ByteBuffer buf) {
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

                PacketOutPluginMessage login_plugin_request;
                login_plugin_request.channel = get_channel(INTERNAL_BRAND);
                login_plugin_request.data.writeString("Mycelium");
                sendPacket(s, std::make_shared<PacketOutPluginMessage>(login_plugin_request));

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

        case 0x0F: {
            printf("Packet Type: Keep Alive\n");
        }

        default:
            printf("Unknown Packet ID [0x%x]\n", packet_id);
            break;
    }
}

#endif //MYCELIUM_PACKET_H
