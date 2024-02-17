

#include "clientbound_block_update.h"

ClientboundBlockUpdate::ClientboundBlockUpdate() = default;
ClientboundBlockUpdate::~ClientboundBlockUpdate() = default;

void ClientboundBlockUpdate::write(ByteBuffer& buf) {
  buf.writeBlockPosition(location);
  buf.writeVarInt(blockID);
}

int ClientboundBlockUpdate::getPacketID() const {
  return 0x09;
}