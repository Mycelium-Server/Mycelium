#include "clientbound_update_entity_rotation.h"

#define TO_PROTOCOL_ANGLE(x) ((unsigned char) (((x) / 360.F) * 256.F))

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
    yaw = target->getLocation().position.yaw;
    pitch = target->getLocation().position.pitch;
}
