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

#include "entity_metadata.h"

#include "metadata_buffer.h"

EntityMetadata::EntityMetadata() = default;
EntityMetadata::~EntityMetadata() = default;

void EntityMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  wrapper.writeByte(0, bitfield.value);
  wrapper.writeVarInt(1, airTicks);
  wrapper.writeOptChat(2, customName);
  wrapper.writeBool(3, customNameVisible);
  wrapper.writeBool(4, isSilent);
  wrapper.writeBool(5, hasNoGravity);
  wrapper.writePose(6, pose);
  wrapper.writeVarInt(7, frozenTicks);
}
