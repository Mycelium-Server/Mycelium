

#include "clientbound_spawn_player.h"

ClientboundSpawnPlayer::ClientboundSpawnPlayer() = default;
ClientboundSpawnPlayer::~ClientboundSpawnPlayer() = default;

void ClientboundSpawnPlayer::write(ByteBuffer& buf) {
  buf.writeVarInt(data.entity->getEID());
  buf.writeUUID(data.uuid);
  auto& location = data.entity->getLocation();
  buf.writeDouble(location.x);
  buf.writeDouble(location.y);
  buf.writeDouble(location.z);
  buf.writeByte((uint8_t) (location.yaw * 256));
  buf.writeByte((uint8_t) (location.pitch * 256));
}

int ClientboundSpawnPlayer::getPacketID() const {
  return 0x02;
}
