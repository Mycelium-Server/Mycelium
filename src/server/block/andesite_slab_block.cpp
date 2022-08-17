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


#include "andesite_slab_block.h"

AndesiteSlabBlock::AndesiteSlabBlock() = default;
AndesiteSlabBlock::~AndesiteSlabBlock() = default;

short AndesiteSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 11724;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 11725;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 11726;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 11727;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 11728;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 11729;
  return 11727;
}

std::shared_ptr<Block> AndesiteSlabBlock::clone() const {
  std::shared_ptr<AndesiteSlabBlock> copy = std::make_shared<AndesiteSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
