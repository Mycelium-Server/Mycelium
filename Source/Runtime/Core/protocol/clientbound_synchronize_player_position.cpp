

#include "clientbound_synchronize_player_position.h"

ClientboundSynchronizePlayerPosition::ClientboundSynchronizePlayerPosition() = default;
ClientboundSynchronizePlayerPosition::~ClientboundSynchronizePlayerPosition() = default;

void ClientboundSynchronizePlayerPosition::write(ByteBuffer& out) {
  out.writeDouble(location.x);
  out.writeDouble(location.y);
  out.writeDouble(location.z);
  out.writeFloat(location.yaw);
  out.writeFloat(location.pitch);
  out.writeByte(flags.value);
  out.writeVarInt(teleportId);
  out.writeByte(dismountVehicle);
}

int ClientboundSynchronizePlayerPosition::getPacketID() const {
  return 0x39;
}
