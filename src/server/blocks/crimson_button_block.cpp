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

#include "crimson_button_block.h"

CrimsonButtonBlock::CrimsonButtonBlock() = default;
CrimsonButtonBlock::~CrimsonButtonBlock() = default;

short CrimsonButtonBlock::getId() const {
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_TRUE) return 16688;
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_FALSE) return 16689;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_TRUE) return 16690;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_FALSE) return 16691;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_TRUE) return 16692;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_FALSE) return 16693;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_TRUE) return 16694;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_FALSE) return 16695;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_TRUE) return 16696;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_FALSE) return 16697;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_TRUE) return 16698;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_FALSE) return 16699;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_TRUE) return 16700;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_FALSE) return 16701;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_TRUE) return 16702;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_FALSE) return 16703;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_TRUE) return 16704;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_FALSE) return 16705;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_TRUE) return 16706;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_FALSE) return 16707;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_TRUE) return 16708;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_FALSE) return 16709;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_TRUE) return 16710;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_FALSE) return 16711;
  return 16697;
}
