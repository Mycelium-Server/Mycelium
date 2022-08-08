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


#include "redstone_wall_torch_block.h"

RedstoneWallTorchBlock::RedstoneWallTorchBlock() = default;
RedstoneWallTorchBlock::~RedstoneWallTorchBlock() = default;

short RedstoneWallTorchBlock::getId() const {
  if (facing == FACING_NORTH && lit == LIT_TRUE) return 4198;
  if (facing == FACING_NORTH && lit == LIT_FALSE) return 4199;
  if (facing == FACING_SOUTH && lit == LIT_TRUE) return 4200;
  if (facing == FACING_SOUTH && lit == LIT_FALSE) return 4201;
  if (facing == FACING_WEST && lit == LIT_TRUE) return 4202;
  if (facing == FACING_WEST && lit == LIT_FALSE) return 4203;
  if (facing == FACING_EAST && lit == LIT_TRUE) return 4204;
  if (facing == FACING_EAST && lit == LIT_FALSE) return 4205;
  return 4198;
}

std::shared_ptr<Block> RedstoneWallTorchBlock::clone() const {
  std::shared_ptr<RedstoneWallTorchBlock> copy = std::make_shared<RedstoneWallTorchBlock>();
  copy->facing = facing;
  copy->lit = lit;
  return copy;
}
