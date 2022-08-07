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

#include "jungle_door_block.h"

JungleDoorBlock::JungleDoorBlock() = default;
JungleDoorBlock::~JungleDoorBlock() = default;

short JungleDoorBlock::getId() const {
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9683;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9684;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9685;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9686;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9687;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9688;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9689;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9690;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9691;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9692;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9693;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9694;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9695;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9696;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9697;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9698;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9699;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9700;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9701;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9702;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9703;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9704;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9705;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9706;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9707;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9708;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9709;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9710;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9711;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9712;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9713;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9714;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9715;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9716;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9717;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9718;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9719;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9720;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9721;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9722;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9723;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9724;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9725;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9726;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9727;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9728;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9729;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9730;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9731;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9732;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9733;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9734;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9735;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9736;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9737;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9738;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9739;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9740;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9741;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9742;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9743;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9744;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9745;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9746;
  return 9694;
}
