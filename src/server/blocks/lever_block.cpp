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

#include "lever_block.h"

LeverBlock::LeverBlock() = default;
LeverBlock::~LeverBlock() = default;

short LeverBlock::getId() const {
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_TRUE) return 4088;
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_FALSE) return 4089;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_TRUE) return 4090;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_FALSE) return 4091;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_TRUE) return 4092;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_FALSE) return 4093;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_TRUE) return 4094;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_FALSE) return 4095;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_TRUE) return 4096;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_FALSE) return 4097;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_TRUE) return 4098;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_FALSE) return 4099;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_TRUE) return 4100;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_FALSE) return 4101;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_TRUE) return 4102;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_FALSE) return 4103;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_TRUE) return 4104;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_FALSE) return 4105;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_TRUE) return 4106;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_FALSE) return 4107;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_TRUE) return 4108;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_FALSE) return 4109;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_TRUE) return 4110;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_FALSE) return 4111;
  return 4097;
}
