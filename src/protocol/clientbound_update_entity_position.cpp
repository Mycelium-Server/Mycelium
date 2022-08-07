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

#include "clientbound_update_entity_position.h"

#define TO_PROTOCOL_DELTA(x) ((short) ((x) *32 * 128))

ClientboundUpdateEntityPosition::ClientboundUpdateEntityPosition() = default;
ClientboundUpdateEntityPosition::~ClientboundUpdateEntityPosition() = default;

void ClientboundUpdateEntityPosition::write(ByteBuffer& buf) {
  buf.writeVarInt(entity->getEID());
  buf.writeShort(TO_PROTOCOL_DELTA(position.x - entity->getLocation().position.position.x));
  buf.writeShort(TO_PROTOCOL_DELTA(position.y - entity->getLocation().position.position.y));
  buf.writeShort(TO_PROTOCOL_DELTA(position.z - entity->getLocation().position.position.z));
  buf.writeByte(entity->isOnGround());
}

int ClientboundUpdateEntityPosition::getPacketID() const {
  return 0x28;
}
