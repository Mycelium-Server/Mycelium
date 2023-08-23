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

#include "fox_metadata.h"

FoxMetadata::FoxMetadata() = default;
FoxMetadata::~FoxMetadata() = default;

void FoxMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  AnimalMetadata::wrapperWrite(wrapper);
  wrapper.writeVarInt(17, (int) isSnow);
  wrapper.writeByte(18, isDefending << 7 |
                            isFaceplanted << 6 |
                            isSleeping << 5 |
                            isPouncing << 4 |
                            isInterested << 3 |
                            isCrouching << 2 |
                            isSitting);
  wrapper.writeOptUUID(19, firstUUID);
  wrapper.writeOptUUID(20, secondUUID);
}
