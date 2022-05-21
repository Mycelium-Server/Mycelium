#ifndef MYCELIUM_PACKET_H
#define MYCELIUM_PACKET_H

#include <memory>
#include "../Server.h"
#include "PacketInHandshake.h"
#include "PacketOutStatusResponse.h"
#include "PacketOutPong.h"
#include "PacketInPing.h"

void sendPacket(uv_stream_t* s, const std::shared_ptr<PacketOut>& packet) {
    ByteBuffer buf;
    ByteBuffer packet_buf = packet->encode();
    int packet_id = packet->getPacketID();
    buf.writeVarInt((int)sizeofVarInt(packet_id) + (int)packet_buf.bytes.size());
    buf.writeVarInt(packet->getPacketID());
    buf.writeByteBuffer(packet_buf);
    write(s, buf);
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
                PacketOutStatusResponse response;
                response.version.name = "1.18.2";
                response.version.protocol = 758;
                response.players.max = 1;
                response.players.online = -4;
                response.description.text = "§aHello world; test server core";
                sendPacket(s, std::make_shared<PacketOutStatusResponse>(response));
                next_state = 0;
            } else if(next_state == 2) {
                next_state = 0;
            }
            else {
                PacketInHandshake handshake;
                handshake.read(buf);
                next_state = handshake.next_state;
            }
            printf("Packet Type: Handshake\n");
            break;
        }

        case 0x01: {
            PacketInPing ping;
            ping.read(buf);
            PacketOutPong pong;
            pong.payload = ping.payload;
            sendPacket(s, std::make_shared<PacketOutPong>(pong));
            printf("Packet Type: Ping\n");
            break;
        }

        default:
            printf("Unknown Packet ID [0x%x]\n", packet_id);
            break;
    }
}

#endif //MYCELIUM_PACKET_H
