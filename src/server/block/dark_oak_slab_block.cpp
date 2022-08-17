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


#include "dark_oak_slab_block.h"

DarkOakSlabBlock::DarkOakSlabBlock() = default;
DarkOakSlabBlock::~DarkOakSlabBlock() = default;

short DarkOakSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9071;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9072;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9073;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9074;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9075;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9076;
  return 9074;
}

std::shared_ptr<Block> DarkOakSlabBlock::clone() const {
  std::shared_ptr<DarkOakSlabBlock> copy = std::make_shared<DarkOakSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
