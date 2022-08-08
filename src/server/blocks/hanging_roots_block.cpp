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


#include "hanging_roots_block.h"

HangingRootsBlock::HangingRootsBlock() = default;
HangingRootsBlock::~HangingRootsBlock() = default;

short HangingRootsBlock::getId() const {
  if (waterlogged == WATERLOGGED_TRUE) return 19774;
  if (waterlogged == WATERLOGGED_FALSE) return 19775;
  return 19775;
}

std::shared_ptr<Block> HangingRootsBlock::clone() const {
  std::shared_ptr<HangingRootsBlock> copy = std::make_shared<HangingRootsBlock>();
  copy->waterlogged = waterlogged;
  return copy;
}
