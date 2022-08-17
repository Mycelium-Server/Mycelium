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


#include "red_sandstone_slab_block.h"

RedSandstoneSlabBlock::RedSandstoneSlabBlock() = default;
RedSandstoneSlabBlock::~RedSandstoneSlabBlock() = default;

short RedSandstoneSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9149;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9150;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9151;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9152;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9153;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9154;
  return 9152;
}

std::shared_ptr<Block> RedSandstoneSlabBlock::clone() const {
  std::shared_ptr<RedSandstoneSlabBlock> copy = std::make_shared<RedSandstoneSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
