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

#include "birch_wall_sign_block.h"

BirchWallSignBlock::BirchWallSignBlock() = default;
BirchWallSignBlock::~BirchWallSignBlock() = default;

short BirchWallSignBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 4048;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 4049;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 4050;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 4051;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 4052;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 4053;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 4054;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 4055;
  return 4049;
}
