#include "clientbound_ack_block_change.h"

ClientboundAckBlockChange::ClientboundAckBlockChange() = default;
ClientboundAckBlockChange::~ClientboundAckBlockChange() = default;

void ClientboundAckBlockChange::write(ByteBuffer& buf) {
  buf.writeVarInt(sequence);
}

int ClientboundAckBlockChange::getPacketID() const {
  return 0x05;
}
