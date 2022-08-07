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

#include "chest_block.h"

ChestBlock::ChestBlock() = default;
ChestBlock::~ChestBlock() = default;

short ChestBlock::getId() const {
  if (type == TYPE_SINGLE && facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 2288;
  if (type == TYPE_SINGLE && facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 2289;
  if (type == TYPE_LEFT && facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 2290;
  if (type == TYPE_LEFT && facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 2291;
  if (type == TYPE_RIGHT && facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 2292;
  if (type == TYPE_RIGHT && facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 2293;
  if (type == TYPE_SINGLE && facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 2294;
  if (type == TYPE_SINGLE && facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 2295;
  if (type == TYPE_LEFT && facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 2296;
  if (type == TYPE_LEFT && facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 2297;
  if (type == TYPE_RIGHT && facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 2298;
  if (type == TYPE_RIGHT && facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 2299;
  if (type == TYPE_SINGLE && facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 2300;
  if (type == TYPE_SINGLE && facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 2301;
  if (type == TYPE_LEFT && facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 2302;
  if (type == TYPE_LEFT && facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 2303;
  if (type == TYPE_RIGHT && facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 2304;
  if (type == TYPE_RIGHT && facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 2305;
  if (type == TYPE_SINGLE && facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 2306;
  if (type == TYPE_SINGLE && facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 2307;
  if (type == TYPE_LEFT && facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 2308;
  if (type == TYPE_LEFT && facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 2309;
  if (type == TYPE_RIGHT && facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 2310;
  if (type == TYPE_RIGHT && facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 2311;
  return 2289;
}
