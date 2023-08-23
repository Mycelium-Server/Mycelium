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

#include "abstract_horse_metadata.h"

AbstractHorseMetadata::AbstractHorseMetadata() = default;
AbstractHorseMetadata::~AbstractHorseMetadata() = default;

void AbstractHorseMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AnimalMetadata::wrapperWrite(wrapper);
  wrapper.writeByte(17, isTame << 1 | isSaddled << 2 | hasBred << 3 |
                            isEating << 4 | isRearing << 5 | isMouthOpen << 6);
  wrapper.writeOptUUID(18, owner);
}
