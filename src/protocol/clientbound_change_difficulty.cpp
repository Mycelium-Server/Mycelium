#include "clientbound_change_difficulty.h"

ClientboundChangeDifficulty::ClientboundChangeDifficulty() = default;
ClientboundChangeDifficulty::~ClientboundChangeDifficulty() = default;

void ClientboundChangeDifficulty::write(ByteBuffer& out) {
  out.writeByte((unsigned char) difficulty);
  out.writeByte(isLocked);
}

int ClientboundChangeDifficulty::getPacketID() const {
  return 0x0B;
}