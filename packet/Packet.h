#ifndef MYCELIUM_PACKET_H
#define MYCELIUM_PACKET_H

#include "../Server.h"
#include "PacketInHandshake.h"
#include "PacketOutStatusResponse.h"

void sendPacket(const std::shared_ptr<Connection>& con, const std::shared_ptr<PacketOut>& packet) {
    ByteBuffer buf;
    ByteBuffer packet_buf = packet->encode();
    int packet_id = packet->getPacketID();
    buf.writeVarInt((int)sizeofVarInt(packet_id) + (int)packet_buf.bytes.size());
    buf.writeVarInt(packet->getPacketID());
    buf.writeByteBuffer(packet_buf);
    buf.writeByte('\n');
    con->async_write(buf);
}

void handlePacket(const std::shared_ptr<Connection>& con, ByteBuffer buf) {
    int length = buf.readVarInt();
    int packet_id = buf.readVarInt();
    printf("Packet Length: %d\n", length);
    printf("Packet ID: %d [0x%x]\n", packet_id, packet_id);
    switch(packet_id) {
        case 0x00: {
            PacketInHandshake handshake;
            handshake.read(buf);
            PacketOutStatusResponse response;
            response.version.name = "1.18.2";
            response.version.protocol = 758;
            response.players.max = 1;
            response.players.online = -4;
            response.description.text = "§aHello world; test server core";
            sendPacket(con, std::make_shared<PacketOutStatusResponse>(response));
            printf("Packet Type: Handshake\n");
            break;
        }

        default:
            printf("Unknown Packet ID [0x%x]\n", packet_id);
            break;
    }
}

#endif //MYCELIUM_PACKET_H
