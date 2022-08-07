#include "clientbound_spawn_player.h"

ClientboundSpawnPlayer::ClientboundSpawnPlayer() = default;
ClientboundSpawnPlayer::~ClientboundSpawnPlayer() = default;

void ClientboundSpawnPlayer::write(ByteBuffer& buf) {
  buf.writeVarInt(data.entity->getEID());
  buf.writeUUID(data.uuid);
  auto& location = data.entity->getLocation();
  buf.writeDouble(location.position.position.x);
  buf.writeDouble(location.position.position.y);
  buf.writeDouble(location.position.position.z);
  buf.writeByte((unsigned char) (location.position.yaw * 256));
  buf.writeByte((unsigned char) (location.position.pitch * 256));
}

int ClientboundSpawnPlayer::getPacketID() const {
  return 0x02;
}
