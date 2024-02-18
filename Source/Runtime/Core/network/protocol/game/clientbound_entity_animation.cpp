

#include "clientbound_entity_animation.h"

ClientboundEntityAnimation::ClientboundEntityAnimation() = default;
ClientboundEntityAnimation::~ClientboundEntityAnimation() = default;

void ClientboundEntityAnimation::write(ByteBuffer& buf) {
  buf.writeVarInt(target->getEID());
  buf.writeByte((uint8_t) animation);
}

int ClientboundEntityAnimation::getPacketID() const {
  return 0x03;
}
