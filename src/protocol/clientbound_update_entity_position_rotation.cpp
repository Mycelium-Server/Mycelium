#include "clientbound_update_entity_position_rotation.h"

#define TO_PROTOCOL_DELTA(x) ((short) ((x) * 32 * 128))
#define TO_PROTOCOL_ANGLE(x) ((unsigned char) (((x) / 360.F) * 256.F))

ClientboundUpdateEntityPositionRotation::ClientboundUpdateEntityPositionRotation() = default;
ClientboundUpdateEntityPositionRotation::~ClientboundUpdateEntityPositionRotation() = default;


void ClientboundUpdateEntityPositionRotation::write(ByteBuffer& buf) {
    buf.writeVarInt(entity->getEID());
    buf.writeShort(TO_PROTOCOL_DELTA(position.position.x - entity->getLocation().position.position.x));
    buf.writeShort(TO_PROTOCOL_DELTA(position.position.y - entity->getLocation().position.position.y));
    buf.writeShort(TO_PROTOCOL_DELTA(position.position.z - entity->getLocation().position.position.z));
    buf.writeByte(TO_PROTOCOL_ANGLE(position.yaw));
    buf.writeByte(TO_PROTOCOL_ANGLE(position.pitch));
    buf.writeByte(entity->isOnGround());
}

int ClientboundUpdateEntityPositionRotation::getPacketID() const {
    return 0x29;
}
