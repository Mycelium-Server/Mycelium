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

#include "armor_stand_metadata.h"

ArmorStandMetadata::ArmorStandMetadata() = default;
ArmorStandMetadata::~ArmorStandMetadata() = default;

void ArmorStandMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  LivingEntityMetadata::wrapperWrite(wrapper);
  wrapper.writeByte(15, isMarker << 3 | hasNoBasePlate << 2 | hasArms << 1 | isSmall);
  wrapper.writeRotation(16, headRotation.x, headRotation.y, headRotation.z);
  wrapper.writeRotation(17, bodyRotation.x, bodyRotation.y, bodyRotation.z);
  wrapper.writeRotation(18, leftArmRotation.x, leftArmRotation.y, leftArmRotation.z);
  wrapper.writeRotation(19, rightArmRotation.x, rightArmRotation.y, rightArmRotation.z);
  wrapper.writeRotation(20, leftLegRotation.x, leftLegRotation.y, leftLegRotation.z);
  wrapper.writeRotation(21, rightLegRotation.x, rightLegRotation.y, rightLegRotation.z);
}
