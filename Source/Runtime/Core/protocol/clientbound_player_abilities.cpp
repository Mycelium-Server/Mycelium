

#include "clientbound_player_abilities.h"

ClientboundPlayerAbilities::ClientboundPlayerAbilities() = default;
ClientboundPlayerAbilities::~ClientboundPlayerAbilities() = default;

void ClientboundPlayerAbilities::write(ByteBuffer& out) {
  out.writeByte(flags.value);
  out.writeFloat(flyingSpeed);
  out.writeFloat(fovModifier);
}

int ClientboundPlayerAbilities::getPacketID() const {
  return 0x31;
}

void ClientboundPlayerAbilities::construct(PlayerData data) {
  bool creative = data.gamemode == Gamemode::CREATIVE;
  bool spectator = data.gamemode == Gamemode::SPECTATOR;
  flags.invulnerable = creative | spectator;
  flags.flying = spectator;
  flags.allowFlying = creative | spectator;
  flags.creativeMode = creative;
  flyingSpeed = 0.05f;
  fovModifier = 0.1f;
}