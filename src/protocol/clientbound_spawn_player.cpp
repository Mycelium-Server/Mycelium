/*
 * Mycelium
 * Copyright (C) 2022  JNNGL
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
  buf.writeByte((unsigned char) (location.yaw * 256));
  buf.writeByte((unsigned char) (location.pitch * 256));
}

int ClientboundSpawnPlayer::getPacketID() const {
  return 0x02;
}
