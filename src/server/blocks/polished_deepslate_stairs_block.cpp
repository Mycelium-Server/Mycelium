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

#include "polished_deepslate_stairs_block.h"

PolishedDeepslateStairsBlock::PolishedDeepslateStairsBlock() = default;
PolishedDeepslateStairsBlock::~PolishedDeepslateStairsBlock() = default;

short PolishedDeepslateStairsBlock::getId() const {
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 20193;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 20194;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 20195;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 20196;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 20197;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 20198;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 20199;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 20200;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 20201;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 20202;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 20203;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 20204;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 20205;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 20206;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 20207;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 20208;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 20209;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 20210;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 20211;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 20212;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 20213;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 20214;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 20215;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 20216;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 20217;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 20218;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 20219;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 20220;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 20221;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 20222;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 20223;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 20224;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 20225;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 20226;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 20227;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 20228;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 20229;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 20230;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 20231;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 20232;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 20233;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 20234;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 20235;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 20236;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 20237;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 20238;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 20239;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 20240;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 20241;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 20242;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 20243;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 20244;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 20245;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 20246;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 20247;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 20248;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 20249;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 20250;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 20251;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 20252;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 20253;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 20254;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 20255;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 20256;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 20257;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 20258;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 20259;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 20260;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 20261;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 20262;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 20263;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 20264;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 20265;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 20266;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 20267;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 20268;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 20269;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 20270;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 20271;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 20272;
  return 20204;
}
