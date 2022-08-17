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


#include "acacia_wall_sign_block.h"

AcaciaWallSignBlock::AcaciaWallSignBlock() = default;
AcaciaWallSignBlock::~AcaciaWallSignBlock() = default;

short AcaciaWallSignBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 4056;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 4057;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 4058;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 4059;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 4060;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 4061;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 4062;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 4063;
  return 4057;
}

std::shared_ptr<Block> AcaciaWallSignBlock::clone() const {
  std::shared_ptr<AcaciaWallSignBlock> copy = std::make_shared<AcaciaWallSignBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
