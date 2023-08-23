/*
 * Mycelium
 * Copyright (C) 2022 - 2023  JNNGL
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

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