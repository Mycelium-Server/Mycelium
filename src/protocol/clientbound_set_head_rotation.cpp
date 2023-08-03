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

#include "clientbound_set_head_rotation.h"

#define TO_PROTOCOL_ANGLE(x) ((uint8_t) (((x) / 360.F) * 256.F))

ClientboundSetHeadRotation::ClientboundSetHeadRotation() = default;
ClientboundSetHeadRotation::~ClientboundSetHeadRotation() = default;

void ClientboundSetHeadRotation::write(ByteBuffer& buf) {
  buf.writeVarInt(entity->getEID());
  buf.writeByte(TO_PROTOCOL_ANGLE(yaw));
}

int ClientboundSetHeadRotation::getPacketID() const {
  return 0x3F;
}

void ClientboundSetHeadRotation::construct(Entity* target) {
  entity = target;
  yaw = target->getLocation().yaw;
}
