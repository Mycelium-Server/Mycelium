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


#include "big_dripleaf_stem_block.h"

BigDripleafStemBlock::BigDripleafStemBlock() = default;
BigDripleafStemBlock::~BigDripleafStemBlock() = default;

short BigDripleafStemBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 19750;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 19751;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 19752;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 19753;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 19754;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 19755;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 19756;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 19757;
  return 19751;
}

std::shared_ptr<Block> BigDripleafStemBlock::clone() const {
  std::shared_ptr<BigDripleafStemBlock> copy = std::make_shared<BigDripleafStemBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
