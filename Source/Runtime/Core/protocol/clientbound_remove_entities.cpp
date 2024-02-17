

#include "clientbound_remove_entities.h"

ClientboundRemoveEntities::ClientboundRemoveEntities() = default;
ClientboundRemoveEntities::~ClientboundRemoveEntities() = default;

void ClientboundRemoveEntities::write(ByteBuffer& buf) {
  buf.writeVarInt((int) entities.size());
  for (auto& entity: entities) {
    buf.writeVarInt(entity->getEID());
  }
}

int ClientboundRemoveEntities::getPacketID() const {
  return 0x3B;
}
