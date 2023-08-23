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

#include "living_entity_metadata.h"

LivingEntityMetadata::LivingEntityMetadata() = default;
LivingEntityMetadata::~LivingEntityMetadata() = default;

void LivingEntityMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  EntityMetadata::wrapperWrite(wrapper);
  wrapper.writeByte(8, inRiptideSpinAttack << 2 | offhand << 1 | isHandActive);
  wrapper.writeFloat(9, health);
  wrapper.writeVarInt(10, potionEffectColor);
  wrapper.writeBool(11, ambientPotionEffect);
  wrapper.writeVarInt(12, numArrows);
  wrapper.writeVarInt(13, numBeeStingers);
  wrapper.writeOptPosition(14, bedLocation);
}
