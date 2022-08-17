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


#include "birch_fence_gate_block.h"

BirchFenceGateBlock::BirchFenceGateBlock() = default;
BirchFenceGateBlock::~BirchFenceGateBlock() = default;

short BirchFenceGateBlock::getId() const {
  if (facing == FACING_NORTH && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_TRUE) return 9203;
  if (facing == FACING_NORTH && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_FALSE) return 9204;
  if (facing == FACING_NORTH && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_TRUE) return 9205;
  if (facing == FACING_NORTH && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_FALSE) return 9206;
  if (facing == FACING_NORTH && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_TRUE) return 9207;
  if (facing == FACING_NORTH && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_FALSE) return 9208;
  if (facing == FACING_NORTH && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_TRUE) return 9209;
  if (facing == FACING_NORTH && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_FALSE) return 9210;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_TRUE) return 9211;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_FALSE) return 9212;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_TRUE) return 9213;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_FALSE) return 9214;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_TRUE) return 9215;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_FALSE) return 9216;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_TRUE) return 9217;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_FALSE) return 9218;
  if (facing == FACING_WEST && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_TRUE) return 9219;
  if (facing == FACING_WEST && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_FALSE) return 9220;
  if (facing == FACING_WEST && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_TRUE) return 9221;
  if (facing == FACING_WEST && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_FALSE) return 9222;
  if (facing == FACING_WEST && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_TRUE) return 9223;
  if (facing == FACING_WEST && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_FALSE) return 9224;
  if (facing == FACING_WEST && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_TRUE) return 9225;
  if (facing == FACING_WEST && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_FALSE) return 9226;
  if (facing == FACING_EAST && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_TRUE) return 9227;
  if (facing == FACING_EAST && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_FALSE) return 9228;
  if (facing == FACING_EAST && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_TRUE) return 9229;
  if (facing == FACING_EAST && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_FALSE) return 9230;
  if (facing == FACING_EAST && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_TRUE) return 9231;
  if (facing == FACING_EAST && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_FALSE) return 9232;
  if (facing == FACING_EAST && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_TRUE) return 9233;
  if (facing == FACING_EAST && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_FALSE) return 9234;
  return 9210;
}

std::shared_ptr<Block> BirchFenceGateBlock::clone() const {
  std::shared_ptr<BirchFenceGateBlock> copy = std::make_shared<BirchFenceGateBlock>();
  copy->facing = facing;
  copy->in_wall = in_wall;
  copy->open = open;
  copy->powered = powered;
  return copy;
}
