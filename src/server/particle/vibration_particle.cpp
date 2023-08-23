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

#include "vibration_particle.h"

VibrationParticle::VibrationParticle() = default;
VibrationParticle::~VibrationParticle() = default;

void VibrationParticle::writeData(ByteBuffer& buf) {
  buf.writeString(positionSourceType);
  if (positionSourceType == "minecraft:block") {
    buf.writeBlockPosition(blockPosition);
  } else if (positionSourceType == "minecraft:entity") {
    buf.writeVarInt(entity->getEID());
    buf.writeFloat(entityEyeHeight);
  }
  buf.writeVarInt(ticks);
}

int VibrationParticle::getParticleID() const {
  return 36;
}
