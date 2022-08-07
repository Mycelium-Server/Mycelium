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

#include "polished_blackstone_slab_block.h"

PolishedBlackstoneSlabBlock::PolishedBlackstoneSlabBlock() = default;
PolishedBlackstoneSlabBlock::~PolishedBlackstoneSlabBlock() = default;

short PolishedBlackstoneSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 17954;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 17955;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 17956;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 17957;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 17958;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 17959;
  return 17957;
}
