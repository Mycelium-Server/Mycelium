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

#include "polished_blackstone_brick_stairs_block.h"

PolishedBlackstoneBrickStairsBlock::PolishedBlackstoneBrickStairsBlock() = default;
PolishedBlackstoneBrickStairsBlock::~PolishedBlackstoneBrickStairsBlock() = default;

short PolishedBlackstoneBrickStairsBlock::getId() const {
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 17469;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 17470;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 17471;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 17472;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 17473;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 17474;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 17475;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 17476;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 17477;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 17478;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 17479;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 17480;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 17481;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 17482;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 17483;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 17484;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 17485;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 17486;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 17487;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 17488;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 17489;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 17490;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 17491;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 17492;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 17493;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 17494;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 17495;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 17496;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 17497;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 17498;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 17499;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 17500;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 17501;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 17502;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 17503;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 17504;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 17505;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 17506;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 17507;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 17508;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 17509;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 17510;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 17511;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 17512;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 17513;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 17514;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 17515;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 17516;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 17517;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 17518;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 17519;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 17520;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 17521;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 17522;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 17523;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 17524;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 17525;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 17526;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 17527;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 17528;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 17529;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 17530;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 17531;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 17532;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 17533;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 17534;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 17535;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 17536;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 17537;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 17538;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 17539;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 17540;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 17541;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 17542;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 17543;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 17544;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 17545;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 17546;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 17547;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 17548;
  return 17480;
}
