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


#include "loom_block.h"

LoomBlock::LoomBlock() = default;
LoomBlock::~LoomBlock() = default;

short LoomBlock::getId() const {
  if (facing == FACING_NORTH) return 15992;
  if (facing == FACING_SOUTH) return 15993;
  if (facing == FACING_WEST) return 15994;
  if (facing == FACING_EAST) return 15995;
  return 15992;
}

std::shared_ptr<Block> LoomBlock::clone() const {
  std::shared_ptr<LoomBlock> copy = std::make_shared<LoomBlock>();
  copy->facing = facing;
  return copy;
}