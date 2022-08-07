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

#include "oak_button_block.h"

OakButtonBlock::OakButtonBlock() = default;
OakButtonBlock::~OakButtonBlock() = default;

short OakButtonBlock::getId() const {
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_TRUE) return 6939;
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_FALSE) return 6940;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_TRUE) return 6941;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_FALSE) return 6942;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_TRUE) return 6943;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_FALSE) return 6944;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_TRUE) return 6945;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_FALSE) return 6946;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_TRUE) return 6947;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_FALSE) return 6948;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_TRUE) return 6949;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_FALSE) return 6950;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_TRUE) return 6951;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_FALSE) return 6952;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_TRUE) return 6953;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_FALSE) return 6954;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_TRUE) return 6955;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_FALSE) return 6956;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_TRUE) return 6957;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_FALSE) return 6958;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_TRUE) return 6959;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_FALSE) return 6960;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_TRUE) return 6961;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_FALSE) return 6962;
  return 6948;
}
