

#include "clientbound_set_default_spawn_position.h"

ClientboundSetDefaultSpawnPosition::ClientboundSetDefaultSpawnPosition() = default;
ClientboundSetDefaultSpawnPosition::~ClientboundSetDefaultSpawnPosition() = default;

void ClientboundSetDefaultSpawnPosition::write(ByteBuffer& out) {
  out.writeBlockPosition(position.getBlockPosition());
  out.writeFloat(position.yaw);
}

int ClientboundSetDefaultSpawnPosition::getPacketID() const {
  return 0x4D;
}
