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

#include "mangrove_slab_block.h"

MangroveSlabBlock::MangroveSlabBlock() = default;
MangroveSlabBlock::~MangroveSlabBlock() = default;

short MangroveSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9077;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9078;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9079;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9080;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9081;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9082;
  return 9080;
}
