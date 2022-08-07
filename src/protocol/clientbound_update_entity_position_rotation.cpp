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

#include "clientbound_update_entity_position_rotation.h"

#define TO_PROTOCOL_DELTA(x) ((short) ((x) *32 * 128))
#define TO_PROTOCOL_ANGLE(x) ((unsigned char) (((x) / 360.F) * 256.F))

ClientboundUpdateEntityPositionRotation::ClientboundUpdateEntityPositionRotation() = default;
ClientboundUpdateEntityPositionRotation::~ClientboundUpdateEntityPositionRotation() = default;


void ClientboundUpdateEntityPositionRotation::write(ByteBuffer& buf) {
  buf.writeVarInt(entity->getEID());
  buf.writeShort(TO_PROTOCOL_DELTA(position.position.x - entity->getLocation().position.position.x));
  buf.writeShort(TO_PROTOCOL_DELTA(position.position.y - entity->getLocation().position.position.y));
  buf.writeShort(TO_PROTOCOL_DELTA(position.position.z - entity->getLocation().position.position.z));
  buf.writeByte(TO_PROTOCOL_ANGLE(position.yaw));
  buf.writeByte(TO_PROTOCOL_ANGLE(position.pitch));
  buf.writeByte(entity->isOnGround());
}

int ClientboundUpdateEntityPositionRotation::getPacketID() const {
  return 0x29;
}
