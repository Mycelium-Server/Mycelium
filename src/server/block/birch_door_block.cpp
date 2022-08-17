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


#include "birch_door_block.h"

BirchDoorBlock::BirchDoorBlock() = default;
BirchDoorBlock::~BirchDoorBlock() = default;

short BirchDoorBlock::getId() const {
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9619;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9620;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9621;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9622;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9623;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9624;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9625;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9626;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9627;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9628;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9629;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9630;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9631;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9632;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9633;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9634;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9635;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9636;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9637;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9638;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9639;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9640;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9641;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9642;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9643;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9644;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9645;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9646;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9647;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9648;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9649;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9650;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9651;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9652;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9653;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9654;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9655;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9656;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9657;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9658;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9659;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9660;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9661;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9662;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9663;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9664;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9665;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9666;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9667;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9668;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9669;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9670;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9671;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9672;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9673;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9674;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9675;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9676;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9677;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9678;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9679;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9680;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9681;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9682;
  return 9630;
}

std::shared_ptr<Block> BirchDoorBlock::clone() const {
  std::shared_ptr<BirchDoorBlock> copy = std::make_shared<BirchDoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->hinge = hinge;
  copy->open = open;
  copy->powered = powered;
  return copy;
}
