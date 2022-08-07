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

#include "iron_trapdoor_block.h"

IronTrapdoorBlock::IronTrapdoorBlock() = default;
IronTrapdoorBlock::~IronTrapdoorBlock() = default;

short IronTrapdoorBlock::getId() const {
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 8278;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 8279;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 8280;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 8281;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 8282;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 8283;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 8284;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 8285;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 8286;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 8287;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 8288;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 8289;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 8290;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 8291;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 8292;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 8293;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 8294;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 8295;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 8296;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 8297;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 8298;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 8299;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 8300;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 8301;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 8302;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 8303;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 8304;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 8305;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 8306;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 8307;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 8308;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 8309;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 8310;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 8311;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 8312;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 8313;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 8314;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 8315;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 8316;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 8317;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 8318;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 8319;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 8320;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 8321;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 8322;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 8323;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 8324;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 8325;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 8326;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 8327;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 8328;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 8329;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 8330;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 8331;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 8332;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 8333;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 8334;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 8335;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 8336;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 8337;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 8338;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 8339;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 8340;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 8341;
  return 8293;
}
