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

#include "bee_metadata.h"

BeeMetadata::BeeMetadata() = default;
BeeMetadata::~BeeMetadata() = default;

void BeeMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AnimalMetadata::wrapperWrite(wrapper);
  wrapper.writeByte(17, hasNectar << 3 | hasStung << 2 | isAngry << 1);
  wrapper.writeVarInt(18, angerTime);
}
