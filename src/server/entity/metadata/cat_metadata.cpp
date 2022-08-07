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

#include "cat_metadata.h"

CatMetadata::CatMetadata() = default;
CatMetadata::~CatMetadata() = default;

void CatMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  TameableAnimalMetadata::wrapperWrite(wrapper);
  wrapper.writeCatVariant(19, type);
  wrapper.writeByte(20, isLying);
  wrapper.writeByte(21, isRelaxed);
  wrapper.writeVarInt(22, collarColor);
}
