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

#include "clientbound_update_entity_rotation.h"

#define TO_PROTOCOL_ANGLE(x) ((uint8_t) (((x) / 360.F) * 256.F))

ClientboundUpdateEntityRotation::ClientboundUpdateEntityRotation() = default;
ClientboundUpdateEntityRotation::~ClientboundUpdateEntityRotation() = default;

void ClientboundUpdateEntityRotation::write(ByteBuffer& buf) {
  buf.writeVarInt(entity->getEID());
  buf.writeByte(TO_PROTOCOL_ANGLE(yaw));
  buf.writeByte(TO_PROTOCOL_ANGLE(pitch));
  buf.writeByte(entity->isOnGround());
}

int ClientboundUpdateEntityRotation::getPacketID() const {
  return 0x2A;
}

void ClientboundUpdateEntityRotation::construct(Entity* target) {
  entity = target;
  yaw = target->getLocation().yaw;
  pitch = target->getLocation().pitch;
}
