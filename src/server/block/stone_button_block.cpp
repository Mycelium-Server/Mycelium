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


#include "stone_button_block.h"

StoneButtonBlock::StoneButtonBlock() = default;
StoneButtonBlock::~StoneButtonBlock() = default;

short StoneButtonBlock::getId() const {
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_TRUE) return 4206;
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_FALSE) return 4207;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_TRUE) return 4208;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_FALSE) return 4209;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_TRUE) return 4210;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_FALSE) return 4211;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_TRUE) return 4212;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_FALSE) return 4213;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_TRUE) return 4214;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_FALSE) return 4215;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_TRUE) return 4216;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_FALSE) return 4217;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_TRUE) return 4218;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_FALSE) return 4219;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_TRUE) return 4220;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_FALSE) return 4221;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_TRUE) return 4222;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_FALSE) return 4223;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_TRUE) return 4224;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_FALSE) return 4225;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_TRUE) return 4226;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_FALSE) return 4227;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_TRUE) return 4228;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_FALSE) return 4229;
  return 4215;
}

std::shared_ptr<Block> StoneButtonBlock::clone() const {
  std::shared_ptr<StoneButtonBlock> copy = std::make_shared<StoneButtonBlock>();
  copy->face = face;
  copy->facing = facing;
  copy->powered = powered;
  return copy;
}
