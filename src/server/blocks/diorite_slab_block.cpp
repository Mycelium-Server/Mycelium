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


#include "diorite_slab_block.h"

DioriteSlabBlock::DioriteSlabBlock() = default;
DioriteSlabBlock::~DioriteSlabBlock() = default;

short DioriteSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 11742;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 11743;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 11744;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 11745;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 11746;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 11747;
  return 11745;
}

std::shared_ptr<Block> DioriteSlabBlock::clone() const {
  std::shared_ptr<DioriteSlabBlock> copy = std::make_shared<DioriteSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
