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


#include "birch_slab_block.h"

BirchSlabBlock::BirchSlabBlock() = default;
BirchSlabBlock::~BirchSlabBlock() = default;

short BirchSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9053;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9054;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9055;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9056;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9057;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9058;
  return 9056;
}

std::shared_ptr<Block> BirchSlabBlock::clone() const {
  std::shared_ptr<BirchSlabBlock> copy = std::make_shared<BirchSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
