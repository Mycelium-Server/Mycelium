#include "handlers.h"
#include "../protocol/packet.h"

PacketEncoder::PacketEncoder() {

}

PacketEncoder::~PacketEncoder() {

}

bool PacketEncoder::encode(ConnectionContext* ctx, void* in, void*& out) {
    ByteBuffer* dst = new ByteBuffer();
    ClientboundPacket* packet = (ClientboundPacket*) in;
    dst->writeVarInt(packet->getPacketID());
    packet->write(*dst);
    out = dst;
    return true;
}