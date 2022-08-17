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


#include "mangrove_fence_gate_block.h"

MangroveFenceGateBlock::MangroveFenceGateBlock() = default;
MangroveFenceGateBlock::~MangroveFenceGateBlock() = default;

short MangroveFenceGateBlock::getId() const {
  if (facing == FACING_NORTH && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_TRUE) return 9331;
  if (facing == FACING_NORTH && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_FALSE) return 9332;
  if (facing == FACING_NORTH && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_TRUE) return 9333;
  if (facing == FACING_NORTH && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_FALSE) return 9334;
  if (facing == FACING_NORTH && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_TRUE) return 9335;
  if (facing == FACING_NORTH && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_FALSE) return 9336;
  if (facing == FACING_NORTH && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_TRUE) return 9337;
  if (facing == FACING_NORTH && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_FALSE) return 9338;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_TRUE) return 9339;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_FALSE) return 9340;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_TRUE) return 9341;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_FALSE) return 9342;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_TRUE) return 9343;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_FALSE) return 9344;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_TRUE) return 9345;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_FALSE) return 9346;
  if (facing == FACING_WEST && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_TRUE) return 9347;
  if (facing == FACING_WEST && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_FALSE) return 9348;
  if (facing == FACING_WEST && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_TRUE) return 9349;
  if (facing == FACING_WEST && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_FALSE) return 9350;
  if (facing == FACING_WEST && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_TRUE) return 9351;
  if (facing == FACING_WEST && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_FALSE) return 9352;
  if (facing == FACING_WEST && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_TRUE) return 9353;
  if (facing == FACING_WEST && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_FALSE) return 9354;
  if (facing == FACING_EAST && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_TRUE) return 9355;
  if (facing == FACING_EAST && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_FALSE) return 9356;
  if (facing == FACING_EAST && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_TRUE) return 9357;
  if (facing == FACING_EAST && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_FALSE) return 9358;
  if (facing == FACING_EAST && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_TRUE) return 9359;
  if (facing == FACING_EAST && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_FALSE) return 9360;
  if (facing == FACING_EAST && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_TRUE) return 9361;
  if (facing == FACING_EAST && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_FALSE) return 9362;
  return 9338;
}

std::shared_ptr<Block> MangroveFenceGateBlock::clone() const {
  std::shared_ptr<MangroveFenceGateBlock> copy = std::make_shared<MangroveFenceGateBlock>();
  copy->facing = facing;
  copy->in_wall = in_wall;
  copy->open = open;
  copy->powered = powered;
  return copy;
}
