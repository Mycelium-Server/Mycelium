#include "clientbound_set_default_spawn_position.h"

ClientboundSetDefaultSpawnPosition::ClientboundSetDefaultSpawnPosition() = default;
ClientboundSetDefaultSpawnPosition::~ClientboundSetDefaultSpawnPosition() = default;

void ClientboundSetDefaultSpawnPosition::write(ByteBuffer& out) {
  out.writeLong((long long) position.position.toProtocol());
  out.writeFloat(position.angle);
}

int ClientboundSetDefaultSpawnPosition::getPacketID() const {
  return 0x4D;
}
