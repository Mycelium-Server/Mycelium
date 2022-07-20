#include "clientbound_initialize_world_border.h"

ClientboundInitializeWorldBorder::ClientboundInitializeWorldBorder() = default;
ClientboundInitializeWorldBorder::~ClientboundInitializeWorldBorder() = default;

void ClientboundInitializeWorldBorder::write(ByteBuffer& out) {
    out.writeDouble(newBorder.x);
    out.writeDouble(newBorder.y);
    out.writeDouble(old.diameter);
    out.writeDouble(newBorder.diameter);
    out.writeVarLong(speed);
    out.writeVarInt(newBorder.portalTeleportBoundary);
    out.writeVarInt(newBorder.warningBlocks);
    out.writeVarInt(newBorder.warningTime);
}

int ClientboundInitializeWorldBorder::getPacketID() const {
    return 0x1D;
}
