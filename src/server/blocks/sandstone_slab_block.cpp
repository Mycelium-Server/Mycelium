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

#include "sandstone_slab_block.h"

SandstoneSlabBlock::SandstoneSlabBlock() = default;
SandstoneSlabBlock::~SandstoneSlabBlock() = default;

short SandstoneSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9095;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9096;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9097;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9098;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9099;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9100;
  return 9098;
}
