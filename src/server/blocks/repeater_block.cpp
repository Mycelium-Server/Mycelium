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


#include "repeater_block.h"

RepeaterBlock::RepeaterBlock() = default;
RepeaterBlock::~RepeaterBlock() = default;

short RepeaterBlock::getId() const {
  if (delay == DELAY_1 && facing == FACING_NORTH && locked == LOCKED_TRUE && powered == POWERED_TRUE) return 4340;
  if (delay == DELAY_1 && facing == FACING_NORTH && locked == LOCKED_TRUE && powered == POWERED_FALSE) return 4341;
  if (delay == DELAY_1 && facing == FACING_NORTH && locked == LOCKED_FALSE && powered == POWERED_TRUE) return 4342;
  if (delay == DELAY_1 && facing == FACING_NORTH && locked == LOCKED_FALSE && powered == POWERED_FALSE) return 4343;
  if (delay == DELAY_1 && facing == FACING_SOUTH && locked == LOCKED_TRUE && powered == POWERED_TRUE) return 4344;
  if (delay == DELAY_1 && facing == FACING_SOUTH && locked == LOCKED_TRUE && powered == POWERED_FALSE) return 4345;
  if (delay == DELAY_1 && facing == FACING_SOUTH && locked == LOCKED_FALSE && powered == POWERED_TRUE) return 4346;
  if (delay == DELAY_1 && facing == FACING_SOUTH && locked == LOCKED_FALSE && powered == POWERED_FALSE) return 4347;
  if (delay == DELAY_1 && facing == FACING_WEST && locked == LOCKED_TRUE && powered == POWERED_TRUE) return 4348;
  if (delay == DELAY_1 && facing == FACING_WEST && locked == LOCKED_TRUE && powered == POWERED_FALSE) return 4349;
  if (delay == DELAY_1 && facing == FACING_WEST && locked == LOCKED_FALSE && powered == POWERED_TRUE) return 4350;
  if (delay == DELAY_1 && facing == FACING_WEST && locked == LOCKED_FALSE && powered == POWERED_FALSE) return 4351;
  if (delay == DELAY_1 && facing == FACING_EAST && locked == LOCKED_TRUE && powered == POWERED_TRUE) return 4352;
  if (delay == DELAY_1 && facing == FACING_EAST && locked == LOCKED_TRUE && powered == POWERED_FALSE) return 4353;
  if (delay == DELAY_1 && facing == FACING_EAST && locked == LOCKED_FALSE && powered == POWERED_TRUE) return 4354;
  if (delay == DELAY_1 && facing == FACING_EAST && locked == LOCKED_FALSE && powered == POWERED_FALSE) return 4355;
  if (delay == DELAY_2 && facing == FACING_NORTH && locked == LOCKED_TRUE && powered == POWERED_TRUE) return 4356;
  if (delay == DELAY_2 && facing == FACING_NORTH && locked == LOCKED_TRUE && powered == POWERED_FALSE) return 4357;
  if (delay == DELAY_2 && facing == FACING_NORTH && locked == LOCKED_FALSE && powered == POWERED_TRUE) return 4358;
  if (delay == DELAY_2 && facing == FACING_NORTH && locked == LOCKED_FALSE && powered == POWERED_FALSE) return 4359;
  if (delay == DELAY_2 && facing == FACING_SOUTH && locked == LOCKED_TRUE && powered == POWERED_TRUE) return 4360;
  if (delay == DELAY_2 && facing == FACING_SOUTH && locked == LOCKED_TRUE && powered == POWERED_FALSE) return 4361;
  if (delay == DELAY_2 && facing == FACING_SOUTH && locked == LOCKED_FALSE && powered == POWERED_TRUE) return 4362;
  if (delay == DELAY_2 && facing == FACING_SOUTH && locked == LOCKED_FALSE && powered == POWERED_FALSE) return 4363;
  if (delay == DELAY_2 && facing == FACING_WEST && locked == LOCKED_TRUE && powered == POWERED_TRUE) return 4364;
  if (delay == DELAY_2 && facing == FACING_WEST && locked == LOCKED_TRUE && powered == POWERED_FALSE) return 4365;
  if (delay == DELAY_2 && facing == FACING_WEST && locked == LOCKED_FALSE && powered == POWERED_TRUE) return 4366;
  if (delay == DELAY_2 && facing == FACING_WEST && locked == LOCKED_FALSE && powered == POWERED_FALSE) return 4367;
  if (delay == DELAY_2 && facing == FACING_EAST && locked == LOCKED_TRUE && powered == POWERED_TRUE) return 4368;
  if (delay == DELAY_2 && facing == FACING_EAST && locked == LOCKED_TRUE && powered == POWERED_FALSE) return 4369;
  if (delay == DELAY_2 && facing == FACING_EAST && locked == LOCKED_FALSE && powered == POWERED_TRUE) return 4370;
  if (delay == DELAY_2 && facing == FACING_EAST && locked == LOCKED_FALSE && powered == POWERED_FALSE) return 4371;
  if (delay == DELAY_3 && facing == FACING_NORTH && locked == LOCKED_TRUE && powered == POWERED_TRUE) return 4372;
  if (delay == DELAY_3 && facing == FACING_NORTH && locked == LOCKED_TRUE && powered == POWERED_FALSE) return 4373;
  if (delay == DELAY_3 && facing == FACING_NORTH && locked == LOCKED_FALSE && powered == POWERED_TRUE) return 4374;
  if (delay == DELAY_3 && facing == FACING_NORTH && locked == LOCKED_FALSE && powered == POWERED_FALSE) return 4375;
  if (delay == DELAY_3 && facing == FACING_SOUTH && locked == LOCKED_TRUE && powered == POWERED_TRUE) return 4376;
  if (delay == DELAY_3 && facing == FACING_SOUTH && locked == LOCKED_TRUE && powered == POWERED_FALSE) return 4377;
  if (delay == DELAY_3 && facing == FACING_SOUTH && locked == LOCKED_FALSE && powered == POWERED_TRUE) return 4378;
  if (delay == DELAY_3 && facing == FACING_SOUTH && locked == LOCKED_FALSE && powered == POWERED_FALSE) return 4379;
  if (delay == DELAY_3 && facing == FACING_WEST && locked == LOCKED_TRUE && powered == POWERED_TRUE) return 4380;
  if (delay == DELAY_3 && facing == FACING_WEST && locked == LOCKED_TRUE && powered == POWERED_FALSE) return 4381;
  if (delay == DELAY_3 && facing == FACING_WEST && locked == LOCKED_FALSE && powered == POWERED_TRUE) return 4382;
  if (delay == DELAY_3 && facing == FACING_WEST && locked == LOCKED_FALSE && powered == POWERED_FALSE) return 4383;
  if (delay == DELAY_3 && facing == FACING_EAST && locked == LOCKED_TRUE && powered == POWERED_TRUE) return 4384;
  if (delay == DELAY_3 && facing == FACING_EAST && locked == LOCKED_TRUE && powered == POWERED_FALSE) return 4385;
  if (delay == DELAY_3 && facing == FACING_EAST && locked == LOCKED_FALSE && powered == POWERED_TRUE) return 4386;
  if (delay == DELAY_3 && facing == FACING_EAST && locked == LOCKED_FALSE && powered == POWERED_FALSE) return 4387;
  if (delay == DELAY_4 && facing == FACING_NORTH && locked == LOCKED_TRUE && powered == POWERED_TRUE) return 4388;
  if (delay == DELAY_4 && facing == FACING_NORTH && locked == LOCKED_TRUE && powered == POWERED_FALSE) return 4389;
  if (delay == DELAY_4 && facing == FACING_NORTH && locked == LOCKED_FALSE && powered == POWERED_TRUE) return 4390;
  if (delay == DELAY_4 && facing == FACING_NORTH && locked == LOCKED_FALSE && powered == POWERED_FALSE) return 4391;
  if (delay == DELAY_4 && facing == FACING_SOUTH && locked == LOCKED_TRUE && powered == POWERED_TRUE) return 4392;
  if (delay == DELAY_4 && facing == FACING_SOUTH && locked == LOCKED_TRUE && powered == POWERED_FALSE) return 4393;
  if (delay == DELAY_4 && facing == FACING_SOUTH && locked == LOCKED_FALSE && powered == POWERED_TRUE) return 4394;
  if (delay == DELAY_4 && facing == FACING_SOUTH && locked == LOCKED_FALSE && powered == POWERED_FALSE) return 4395;
  if (delay == DELAY_4 && facing == FACING_WEST && locked == LOCKED_TRUE && powered == POWERED_TRUE) return 4396;
  if (delay == DELAY_4 && facing == FACING_WEST && locked == LOCKED_TRUE && powered == POWERED_FALSE) return 4397;
  if (delay == DELAY_4 && facing == FACING_WEST && locked == LOCKED_FALSE && powered == POWERED_TRUE) return 4398;
  if (delay == DELAY_4 && facing == FACING_WEST && locked == LOCKED_FALSE && powered == POWERED_FALSE) return 4399;
  if (delay == DELAY_4 && facing == FACING_EAST && locked == LOCKED_TRUE && powered == POWERED_TRUE) return 4400;
  if (delay == DELAY_4 && facing == FACING_EAST && locked == LOCKED_TRUE && powered == POWERED_FALSE) return 4401;
  if (delay == DELAY_4 && facing == FACING_EAST && locked == LOCKED_FALSE && powered == POWERED_TRUE) return 4402;
  if (delay == DELAY_4 && facing == FACING_EAST && locked == LOCKED_FALSE && powered == POWERED_FALSE) return 4403;
  return 4343;
}

std::shared_ptr<Block> RepeaterBlock::clone() const {
  std::shared_ptr<RepeaterBlock> copy = std::make_shared<RepeaterBlock>();
  copy->delay = delay;
  copy->facing = facing;
  copy->locked = locked;
  copy->powered = powered;
  return copy;
}
