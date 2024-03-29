

#include "clientbound_update_entity_rotation.h"

#define TO_PROTOCOL_ANGLE(x) ((uint8_t) (int8_t) (((x) / 360.F) * 256.F))

ClientboundUpdateEntityRotation::ClientboundUpdateEntityRotation() = default;
ClientboundUpdateEntityRotation::~ClientboundUpdateEntityRotation() = default;

void ClientboundUpdateEntityRotation::write(ByteBuffer& buf) {
  buf.writeVarInt(entity->getEID());
  buf.writeByte(TO_PROTOCOL_ANGLE(yaw));
  buf.writeByte(TO_PROTOCOL_ANGLE(pitch));
  buf.writeByte(entity->isOnGround());
}

int ClientboundUpdateEntityRotation::getPacketID() const {
  return 0x2A;
}

void ClientboundUpdateEntityRotation::construct(Entity* target) {
  entity = target;
  yaw = target->getLocation().yaw;
  pitch = target->getLocation().pitch;
}
