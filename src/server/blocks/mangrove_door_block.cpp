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

#include "mangrove_door_block.h"

MangroveDoorBlock::MangroveDoorBlock() = default;
MangroveDoorBlock::~MangroveDoorBlock() = default;

short MangroveDoorBlock::getId() const {
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9875;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9876;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9877;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9878;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9879;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9880;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9881;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9882;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9883;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9884;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9885;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9886;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9887;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9888;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9889;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9890;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9891;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9892;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9893;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9894;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9895;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9896;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9897;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9898;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9899;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9900;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9901;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9902;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9903;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9904;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9905;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9906;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9907;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9908;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9909;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9910;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9911;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9912;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9913;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9914;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9915;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9916;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9917;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9918;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9919;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9920;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9921;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9922;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9923;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9924;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9925;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9926;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9927;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9928;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9929;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9930;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9931;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9932;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9933;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9934;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9935;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9936;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9937;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9938;
  return 9886;
}
