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


#include "oak_wall_sign_block.h"

OakWallSignBlock::OakWallSignBlock() = default;
OakWallSignBlock::~OakWallSignBlock() = default;

short OakWallSignBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 4032;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 4033;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 4034;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 4035;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 4036;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 4037;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 4038;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 4039;
  return 4033;
}

std::shared_ptr<Block> OakWallSignBlock::clone() const {
  std::shared_ptr<OakWallSignBlock> copy = std::make_shared<OakWallSignBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
