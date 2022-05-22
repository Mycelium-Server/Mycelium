#ifndef MYCELIUM_PACKET_H
#define MYCELIUM_PACKET_H

#include <memory>
#include "../Server.h"
#include "PacketInHandshake.h"
#include "PacketOutStatusResponse.h"
#include "PacketOutPong.h"
#include "PacketInPing.h"
#include "PacketInLoginStart.h"
#include "PacketOutLoginSuccess.h"

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

int next_state = 0;

void handlePacket(uv_stream_t* s, ByteBuffer buf) {
    int length = buf.readVarInt();
    int packet_id = buf.readVarInt();
    printf("Packet Length: %d\n", length);
    printf("Packet ID: %d [0x%x]\n", packet_id, packet_id);
    switch(packet_id) {
        case 0x00: {
            if(next_state == 1) {
                next_state = 0;
                printf("Packet Type: Request\n");
                PacketOutStatusResponse response;
                response.version.name = "1.18.2";
                response.version.protocol = 758;
                response.players.max = 1;
                response.players.online = -4;
                response.description.text = "§aHello world; test server core";
                sendPacket(s, std::make_shared<PacketOutStatusResponse>(response));
            } else if(next_state == 2) {
                next_state = 0;
                printf("Packet Type: Login Start\n");
                PacketInLoginStart login_start;
                login_start.read(buf);
                printf("Name: %s\n", login_start.name.data());
                PacketOutLoginSuccess login_success;
                login_success.username = login_start.name;
                sendPacket(s, std::make_shared<PacketOutLoginSuccess>(login_success));
            }
            else {
                printf("Packet Type: Handshake\n");
                PacketInHandshake handshake;
                handshake.read(buf);
                next_state = handshake.next_state;
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

        default:
            printf("Unknown Packet ID [0x%x]\n", packet_id);
            break;
    }
}

#endif //MYCELIUM_PACKET_H
