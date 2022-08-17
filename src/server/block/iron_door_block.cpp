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


#include "iron_door_block.h"

IronDoorBlock::IronDoorBlock() = default;
IronDoorBlock::~IronDoorBlock() = default;

short IronDoorBlock::getId() const {
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 4114;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 4115;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 4116;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 4117;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 4118;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 4119;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 4120;
  if (facing == FACING_NORTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 4121;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 4122;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 4123;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 4124;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 4125;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 4126;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 4127;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 4128;
  if (facing == FACING_NORTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 4129;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 4130;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 4131;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 4132;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 4133;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 4134;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 4135;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 4136;
  if (facing == FACING_SOUTH && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 4137;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 4138;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 4139;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 4140;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 4141;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 4142;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 4143;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 4144;
  if (facing == FACING_SOUTH && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 4145;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 4146;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 4147;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 4148;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 4149;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 4150;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 4151;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 4152;
  if (facing == FACING_WEST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 4153;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 4154;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 4155;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 4156;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 4157;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 4158;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 4159;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 4160;
  if (facing == FACING_WEST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 4161;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 4162;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 4163;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 4164;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 4165;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 4166;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 4167;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 4168;
  if (facing == FACING_EAST && half == HALF_UPPER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 4169;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_TRUE) return 4170;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_TRUE && powered == POWERED_FALSE) return 4171;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_TRUE) return 4172;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_LEFT && open == OPEN_FALSE && powered == POWERED_FALSE) return 4173;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_TRUE) return 4174;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_TRUE && powered == POWERED_FALSE) return 4175;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_TRUE) return 4176;
  if (facing == FACING_EAST && half == HALF_LOWER && hinge == HINGE_RIGHT && open == OPEN_FALSE && powered == POWERED_FALSE) return 4177;
  return 4125;
}

std::shared_ptr<Block> IronDoorBlock::clone() const {
  std::shared_ptr<IronDoorBlock> copy = std::make_shared<IronDoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->hinge = hinge;
  copy->open = open;
  copy->powered = powered;
  return copy;
}
