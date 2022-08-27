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


#include "soul_wall_torch_block.h"

SoulWallTorchBlock::SoulWallTorchBlock() = default;
SoulWallTorchBlock::~SoulWallTorchBlock() = default;

short SoulWallTorchBlock::getId() const {
  if (facing == FACING_NORTH) return 4318;
  if (facing == FACING_SOUTH) return 4319;
  if (facing == FACING_WEST) return 4320;
  if (facing == FACING_EAST) return 4321;
  return 4318;
}

std::shared_ptr<Block> SoulWallTorchBlock::clone() const {
  std::shared_ptr<SoulWallTorchBlock> copy = std::make_shared<SoulWallTorchBlock>();
  copy->facing = facing;
  return copy;
}