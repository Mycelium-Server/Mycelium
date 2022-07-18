#include "handlers.h"
#include "../protocol/packet.h"

PacketEncoder::PacketEncoder() = default;
PacketEncoder::~PacketEncoder() = default;

bool PacketEncoder::encode(ConnectionContext* ctx, void* in, void*& out) {
    auto* dst = new ByteBuffer();
    auto* packet = (ClientboundPacket*) in;
    dst->writeVarInt(packet->getPacketID());
    packet->write(*dst);
    out = dst;
    return true;
}