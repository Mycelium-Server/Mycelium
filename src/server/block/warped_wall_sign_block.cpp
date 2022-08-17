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


#include "warped_wall_sign_block.h"

WarpedWallSignBlock::WarpedWallSignBlock() = default;
WarpedWallSignBlock::~WarpedWallSignBlock() = default;

short WarpedWallSignBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 16936;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 16937;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 16938;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 16939;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 16940;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 16941;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 16942;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 16943;
  return 16937;
}

std::shared_ptr<Block> WarpedWallSignBlock::clone() const {
  std::shared_ptr<WarpedWallSignBlock> copy = std::make_shared<WarpedWallSignBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
