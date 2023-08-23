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

#include "clientbound_login.h"

ClientboundLogin::ClientboundLogin() = default;
ClientboundLogin::~ClientboundLogin() = default;

void ClientboundLogin::write(ByteBuffer& out) {
  out.writeInt(entity->getEID());
  out.writeByte(server->isHardcore());
  out.writeByte(player.gamemode);
  out.writeByte(-1);
  out.writeVarInt((int) dimensions.size());
  for (Dimension& dim: dimensions) {
    out.writeString(dim.name);
  }
  out.writeBytes(registryCodec);
  out.writeString(dimension.type);
  out.writeString(dimension.name);
  out.writeLong(dimension.seed);
  out.writeVarInt(0);
  out.writeVarInt(server->getViewDistance());
  out.writeVarInt(server->getSimulationDistance());
  out.writeByte(server->showReducedDebugInfo());
  out.writeByte(server->showRespawnScreen());
  out.writeByte(dimension.isDebug);
  out.writeByte(dimension.isFlat);
  out.writeByte(player.deathLocation.has_value());
  if (player.deathLocation.has_value()) {
    out.writeString(player.deathLocation.value().dimension->name);
    out.writeBlockPosition(player.deathLocation.value().getBlockPosition());
  }
}

int ClientboundLogin::getPacketID() const {
  return 0x25;
}