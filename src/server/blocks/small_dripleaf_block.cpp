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

#include "small_dripleaf_block.h"

SmallDripleafBlock::SmallDripleafBlock() = default;
SmallDripleafBlock::~SmallDripleafBlock() = default;

short SmallDripleafBlock::getId() const {
  if (facing == FACING_NORTH && half == HALF_UPPER && waterlogged == WATERLOGGED_TRUE) return 19758;
  if (facing == FACING_NORTH && half == HALF_UPPER && waterlogged == WATERLOGGED_FALSE) return 19759;
  if (facing == FACING_NORTH && half == HALF_LOWER && waterlogged == WATERLOGGED_TRUE) return 19760;
  if (facing == FACING_NORTH && half == HALF_LOWER && waterlogged == WATERLOGGED_FALSE) return 19761;
  if (facing == FACING_SOUTH && half == HALF_UPPER && waterlogged == WATERLOGGED_TRUE) return 19762;
  if (facing == FACING_SOUTH && half == HALF_UPPER && waterlogged == WATERLOGGED_FALSE) return 19763;
  if (facing == FACING_SOUTH && half == HALF_LOWER && waterlogged == WATERLOGGED_TRUE) return 19764;
  if (facing == FACING_SOUTH && half == HALF_LOWER && waterlogged == WATERLOGGED_FALSE) return 19765;
  if (facing == FACING_WEST && half == HALF_UPPER && waterlogged == WATERLOGGED_TRUE) return 19766;
  if (facing == FACING_WEST && half == HALF_UPPER && waterlogged == WATERLOGGED_FALSE) return 19767;
  if (facing == FACING_WEST && half == HALF_LOWER && waterlogged == WATERLOGGED_TRUE) return 19768;
  if (facing == FACING_WEST && half == HALF_LOWER && waterlogged == WATERLOGGED_FALSE) return 19769;
  if (facing == FACING_EAST && half == HALF_UPPER && waterlogged == WATERLOGGED_TRUE) return 19770;
  if (facing == FACING_EAST && half == HALF_UPPER && waterlogged == WATERLOGGED_FALSE) return 19771;
  if (facing == FACING_EAST && half == HALF_LOWER && waterlogged == WATERLOGGED_TRUE) return 19772;
  if (facing == FACING_EAST && half == HALF_LOWER && waterlogged == WATERLOGGED_FALSE) return 19773;
  return 19761;
}
