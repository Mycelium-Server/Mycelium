

#include "clientbound_set_entity_metadata.h"

ClientboundSetEntityMetadata::ClientboundSetEntityMetadata() = default;
ClientboundSetEntityMetadata::~ClientboundSetEntityMetadata() = default;

void ClientboundSetEntityMetadata::write(ByteBuffer& buf) {
  buf.writeVarInt(entity->getEID());
  entity->getMetadata()->write(buf);
}

int ClientboundSetEntityMetadata::getPacketID() const {
  return 0x50;
}
