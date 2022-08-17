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


#include "mangrove_wall_sign_block.h"

MangroveWallSignBlock::MangroveWallSignBlock() = default;
MangroveWallSignBlock::~MangroveWallSignBlock() = default;

short MangroveWallSignBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 4080;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 4081;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 4082;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 4083;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 4084;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 4085;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 4086;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 4087;
  return 4081;
}

std::shared_ptr<Block> MangroveWallSignBlock::clone() const {
  std::shared_ptr<MangroveWallSignBlock> copy = std::make_shared<MangroveWallSignBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
