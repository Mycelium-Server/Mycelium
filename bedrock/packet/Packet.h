#ifndef MYCELIUM_UDP_PACKET_H
#define MYCELIUM_UDP_PACKET_H

#include <uv.h>
#include "../../ByteBuffer.h"
#include "../Server.h"
#include "AbstractPacket.h"

void udp_handle_packet(uv_udp_t* handle, ByteBuffer& buf) {
    byte_t packet_id = buf.readByte();
    printf("UDP: Packet ID 0x%x\n", packet_id);
}

#endif //MYCELIUM_UDP_PACKET_H
