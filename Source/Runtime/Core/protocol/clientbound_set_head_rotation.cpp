

#include "clientbound_set_head_rotation.h"

#define TO_PROTOCOL_ANGLE(x) ((uint8_t) (int8_t) (((x) / 360.F) * 256.F))

ClientboundSetHeadRotation::ClientboundSetHeadRotation() = default;
ClientboundSetHeadRotation::~ClientboundSetHeadRotation() = default;

void ClientboundSetHeadRotation::write(ByteBuffer& buf) {
  buf.writeVarInt(entity->getEID());
  buf.writeByte(TO_PROTOCOL_ANGLE(yaw));
}

int ClientboundSetHeadRotation::getPacketID() const {
  return 0x3F;
}

void ClientboundSetHeadRotation::construct(Entity* target) {
  entity = target;
  yaw = target->getLocation().yaw;
}
