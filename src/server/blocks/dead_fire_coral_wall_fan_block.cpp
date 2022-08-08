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


#include "dead_fire_coral_wall_fan_block.h"

DeadFireCoralWallFanBlock::DeadFireCoralWallFanBlock() = default;
DeadFireCoralWallFanBlock::~DeadFireCoralWallFanBlock() = default;

short DeadFireCoralWallFanBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 10465;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 10466;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 10467;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 10468;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 10469;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 10470;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 10471;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 10472;
  return 10465;
}

std::shared_ptr<Block> DeadFireCoralWallFanBlock::clone() const {
  std::shared_ptr<DeadFireCoralWallFanBlock> copy = std::make_shared<DeadFireCoralWallFanBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
