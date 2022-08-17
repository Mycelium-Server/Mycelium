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


#include "chain_block.h"

ChainBlock::ChainBlock() = default;
ChainBlock::~ChainBlock() = default;

short ChainBlock::getId() const {
  if (axis == AXIS_X && waterlogged == WATERLOGGED_TRUE) return 5104;
  if (axis == AXIS_X && waterlogged == WATERLOGGED_FALSE) return 5105;
  if (axis == AXIS_Y && waterlogged == WATERLOGGED_TRUE) return 5106;
  if (axis == AXIS_Y && waterlogged == WATERLOGGED_FALSE) return 5107;
  if (axis == AXIS_Z && waterlogged == WATERLOGGED_TRUE) return 5108;
  if (axis == AXIS_Z && waterlogged == WATERLOGGED_FALSE) return 5109;
  return 5107;
}

std::shared_ptr<Block> ChainBlock::clone() const {
  std::shared_ptr<ChainBlock> copy = std::make_shared<ChainBlock>();
  copy->axis = axis;
  copy->waterlogged = waterlogged;
  return copy;
}
