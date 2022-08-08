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


#include "dead_bubble_coral_wall_fan_block.h"

DeadBubbleCoralWallFanBlock::DeadBubbleCoralWallFanBlock() = default;
DeadBubbleCoralWallFanBlock::~DeadBubbleCoralWallFanBlock() = default;

short DeadBubbleCoralWallFanBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 10457;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 10458;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 10459;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 10460;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 10461;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 10462;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 10463;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 10464;
  return 10457;
}

std::shared_ptr<Block> DeadBubbleCoralWallFanBlock::clone() const {
  std::shared_ptr<DeadBubbleCoralWallFanBlock> copy = std::make_shared<DeadBubbleCoralWallFanBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
