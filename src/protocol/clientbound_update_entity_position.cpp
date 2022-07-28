#include "clientbound_update_entity_position.h"

#define TO_PROTOCOL_DELTA(x) ((short) ((x) * 32 * 128))

ClientboundUpdateEntityPosition::ClientboundUpdateEntityPosition() = default;
ClientboundUpdateEntityPosition::~ClientboundUpdateEntityPosition() = default;

void ClientboundUpdateEntityPosition::write(ByteBuffer& buf) {
    buf.writeVarInt(entity->getEID());
    buf.writeShort(TO_PROTOCOL_DELTA(position.x - entity->getLocation().position.position.x));
    buf.writeShort(TO_PROTOCOL_DELTA(position.y - entity->getLocation().position.position.y));
    buf.writeShort(TO_PROTOCOL_DELTA(position.z - entity->getLocation().position.position.z));
    buf.writeByte(entity->isOnGround());
}

int ClientboundUpdateEntityPosition::getPacketID() const {
    return 0x28;
}
