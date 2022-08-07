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

#include "boat_metadata.h"

BoatMetadata::BoatMetadata() = default;
BoatMetadata::~BoatMetadata() = default;

void BoatMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  EntityMetadata::wrapperWrite(wrapper);
  wrapper.writeVarInt(8, timeSinceLastHit);
  wrapper.writeVarInt(9, forwardDirection);
  wrapper.writeFloat(10, damageTaken);
  wrapper.writeVarInt(11, (int) type);
  wrapper.writeBool(12, leftPaddleTurning);
  wrapper.writeBool(13, rightPaddleTurning);
  wrapper.writeVarInt(14, splashTimer);
}
