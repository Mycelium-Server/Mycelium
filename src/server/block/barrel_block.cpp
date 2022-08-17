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


#include "barrel_block.h"

BarrelBlock::BarrelBlock() = default;
BarrelBlock::~BarrelBlock() = default;

short BarrelBlock::getId() const {
  if (facing == FACING_NORTH && open == OPEN_TRUE) return 15996;
  if (facing == FACING_NORTH && open == OPEN_FALSE) return 15997;
  if (facing == FACING_EAST && open == OPEN_TRUE) return 15998;
  if (facing == FACING_EAST && open == OPEN_FALSE) return 15999;
  if (facing == FACING_SOUTH && open == OPEN_TRUE) return 16000;
  if (facing == FACING_SOUTH && open == OPEN_FALSE) return 16001;
  if (facing == FACING_WEST && open == OPEN_TRUE) return 16002;
  if (facing == FACING_WEST && open == OPEN_FALSE) return 16003;
  if (facing == FACING_UP && open == OPEN_TRUE) return 16004;
  if (facing == FACING_UP && open == OPEN_FALSE) return 16005;
  if (facing == FACING_DOWN && open == OPEN_TRUE) return 16006;
  if (facing == FACING_DOWN && open == OPEN_FALSE) return 16007;
  return 15997;
}

std::shared_ptr<Block> BarrelBlock::clone() const {
  std::shared_ptr<BarrelBlock> copy = std::make_shared<BarrelBlock>();
  copy->facing = facing;
  copy->open = open;
  return copy;
}
