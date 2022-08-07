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

#include "prismarine_brick_stairs_block.h"

PrismarineBrickStairsBlock::PrismarineBrickStairsBlock() = default;
PrismarineBrickStairsBlock::~PrismarineBrickStairsBlock() = default;

short PrismarineBrickStairsBlock::getId() const {
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 8425;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 8426;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 8427;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 8428;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 8429;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 8430;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 8431;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 8432;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 8433;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 8434;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 8435;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 8436;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 8437;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 8438;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 8439;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 8440;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 8441;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 8442;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 8443;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 8444;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 8445;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 8446;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 8447;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 8448;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 8449;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 8450;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 8451;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 8452;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 8453;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 8454;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 8455;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 8456;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 8457;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 8458;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 8459;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 8460;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 8461;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 8462;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 8463;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 8464;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 8465;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 8466;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 8467;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 8468;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 8469;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 8470;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 8471;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 8472;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 8473;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 8474;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 8475;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 8476;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 8477;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 8478;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 8479;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 8480;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 8481;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 8482;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 8483;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 8484;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 8485;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 8486;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 8487;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 8488;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 8489;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 8490;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 8491;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 8492;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 8493;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 8494;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 8495;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 8496;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 8497;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 8498;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 8499;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 8500;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 8501;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 8502;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 8503;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 8504;
  return 8436;
}
