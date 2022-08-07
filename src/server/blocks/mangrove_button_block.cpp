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

#include "mangrove_button_block.h"

MangroveButtonBlock::MangroveButtonBlock() = default;
MangroveButtonBlock::~MangroveButtonBlock() = default;

short MangroveButtonBlock::getId() const {
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_TRUE) return 7083;
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_FALSE) return 7084;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_TRUE) return 7085;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_FALSE) return 7086;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_TRUE) return 7087;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_FALSE) return 7088;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_TRUE) return 7089;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_FALSE) return 7090;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_TRUE) return 7091;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_FALSE) return 7092;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_TRUE) return 7093;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_FALSE) return 7094;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_TRUE) return 7095;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_FALSE) return 7096;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_TRUE) return 7097;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_FALSE) return 7098;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_TRUE) return 7099;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_FALSE) return 7100;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_TRUE) return 7101;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_FALSE) return 7102;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_TRUE) return 7103;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_FALSE) return 7104;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_TRUE) return 7105;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_FALSE) return 7106;
  return 7092;
}
