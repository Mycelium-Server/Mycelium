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

#include "mud_brick_stairs_block.h"

MudBrickStairsBlock::MudBrickStairsBlock() = default;
MudBrickStairsBlock::~MudBrickStairsBlock() = default;

short MudBrickStairsBlock::getId() const {
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 5519;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 5520;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 5521;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 5522;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 5523;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 5524;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 5525;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 5526;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 5527;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 5528;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 5529;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 5530;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 5531;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 5532;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 5533;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 5534;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 5535;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 5536;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 5537;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 5538;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 5539;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 5540;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 5541;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 5542;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 5543;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 5544;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 5545;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 5546;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 5547;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 5548;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 5549;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 5550;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 5551;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 5552;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 5553;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 5554;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 5555;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 5556;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 5557;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 5558;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 5559;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 5560;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 5561;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 5562;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 5563;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 5564;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 5565;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 5566;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 5567;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 5568;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 5569;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 5570;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 5571;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 5572;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 5573;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 5574;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 5575;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 5576;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 5577;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 5578;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 5579;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 5580;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 5581;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 5582;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 5583;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 5584;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 5585;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 5586;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 5587;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 5588;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 5589;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 5590;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 5591;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 5592;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 5593;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 5594;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 5595;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 5596;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 5597;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 5598;
  return 5530;
}
