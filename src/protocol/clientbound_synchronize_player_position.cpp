#include "clientbound_synchronize_player_position.h"

ClientboundSynchronizePlayerPosition::ClientboundSynchronizePlayerPosition() = default;
ClientboundSynchronizePlayerPosition::~ClientboundSynchronizePlayerPosition() = default;

void ClientboundSynchronizePlayerPosition::write(ByteBuffer& out) {
  out.writeDouble(location.position.position.x);
  out.writeDouble(location.position.position.y);
  out.writeDouble(location.position.position.z);
  out.writeFloat(location.position.yaw);
  out.writeFloat(location.position.pitch);
  out.writeByte(flags.value);
  out.writeVarInt(teleportId);
  out.writeByte(dismountVehicle);
}

int ClientboundSynchronizePlayerPosition::getPacketID() const {
  return 0x39;
}
