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

#include "crimson_stairs_block.h"

CrimsonStairsBlock::CrimsonStairsBlock() = default;
CrimsonStairsBlock::~CrimsonStairsBlock() = default;

short CrimsonStairsBlock::getId() const {
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 16528;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 16529;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 16530;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 16531;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 16532;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 16533;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 16534;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 16535;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 16536;
  if (facing == FACING_NORTH && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 16537;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 16538;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 16539;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 16540;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 16541;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 16542;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 16543;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 16544;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 16545;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 16546;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 16547;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 16548;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 16549;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 16550;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 16551;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 16552;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 16553;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 16554;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 16555;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 16556;
  if (facing == FACING_SOUTH && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 16557;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 16558;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 16559;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 16560;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 16561;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 16562;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 16563;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 16564;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 16565;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 16566;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 16567;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 16568;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 16569;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 16570;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 16571;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 16572;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 16573;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 16574;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 16575;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 16576;
  if (facing == FACING_WEST && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 16577;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 16578;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 16579;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 16580;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 16581;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 16582;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 16583;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 16584;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 16585;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 16586;
  if (facing == FACING_WEST && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 16587;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 16588;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 16589;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 16590;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 16591;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 16592;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 16593;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 16594;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 16595;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 16596;
  if (facing == FACING_EAST && half == HALF_TOP && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 16597;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_TRUE) return 16598;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_STRAIGHT && waterlogged == WATERLOGGED_FALSE) return 16599;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_TRUE) return 16600;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_INNER_LEFT && waterlogged == WATERLOGGED_FALSE) return 16601;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 16602;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_INNER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 16603;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_TRUE) return 16604;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_OUTER_LEFT && waterlogged == WATERLOGGED_FALSE) return 16605;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_TRUE) return 16606;
  if (facing == FACING_EAST && half == HALF_BOTTOM && shape == SHAPE_OUTER_RIGHT && waterlogged == WATERLOGGED_FALSE) return 16607;
  return 16539;
}
