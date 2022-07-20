#include "clientbound_set_center_chunk.h"

ClientboundSetCenterChunk::ClientboundSetCenterChunk() = default;
ClientboundSetCenterChunk::~ClientboundSetCenterChunk() = default;

void ClientboundSetCenterChunk::write(ByteBuffer& out) {
    out.writeVarInt(location.x);
    out.writeVarInt(location.z);
}

int ClientboundSetCenterChunk::getPacketID() const {
    return 0x48;
}
