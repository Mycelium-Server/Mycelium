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


#include "spruce_door_block.h"

SpruceDoorBlock::SpruceDoorBlock() = default;
SpruceDoorBlock::~SpruceDoorBlock() = default;

short SpruceDoorBlock::getId() const {
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9555;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9556;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9557;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9558;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9559;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9560;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9561;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9562;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9563;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9564;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9565;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9566;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9567;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9568;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9569;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9570;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9571;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9572;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9573;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9574;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9575;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9576;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9577;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9578;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9579;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9580;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9581;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9582;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9583;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9584;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9585;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9586;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9587;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9588;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9589;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9590;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9591;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9592;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9593;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9594;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9595;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9596;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9597;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9598;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9599;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9600;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9601;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9602;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9603;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9604;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9605;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9606;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9607;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9608;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9609;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9610;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9611;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9612;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9613;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9614;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 9615;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 9616;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 9617;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 9618;
  return 9566;
}

std::shared_ptr<Block> SpruceDoorBlock::clone() const {
  std::shared_ptr<SpruceDoorBlock> copy = std::make_shared<SpruceDoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->hinge = hinge;
  copy->open = open;
  copy->powered = powered;
  return copy;
}
