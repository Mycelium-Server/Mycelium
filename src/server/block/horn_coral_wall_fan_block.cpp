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


#include "horn_coral_wall_fan_block.h"

HornCoralWallFanBlock::HornCoralWallFanBlock() = default;
HornCoralWallFanBlock::~HornCoralWallFanBlock() = default;

short HornCoralWallFanBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 10513;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 10514;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 10515;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 10516;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 10517;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 10518;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 10519;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 10520;
  return 10513;
}

std::shared_ptr<Block> HornCoralWallFanBlock::clone() const {
  std::shared_ptr<HornCoralWallFanBlock> copy = std::make_shared<HornCoralWallFanBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}