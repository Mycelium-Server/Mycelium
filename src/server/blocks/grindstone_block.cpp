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

#include "grindstone_block.h"

GrindstoneBlock::GrindstoneBlock() = default;
GrindstoneBlock::~GrindstoneBlock() = default;

short GrindstoneBlock::getId() const {
  if (face == FACE_FLOOR && facing == FACING_NORTH) return 16026;
  if (face == FACE_FLOOR && facing == FACING_SOUTH) return 16027;
  if (face == FACE_FLOOR && facing == FACING_WEST) return 16028;
  if (face == FACE_FLOOR && facing == FACING_EAST) return 16029;
  if (face == FACE_WALL && facing == FACING_NORTH) return 16030;
  if (face == FACE_WALL && facing == FACING_SOUTH) return 16031;
  if (face == FACE_WALL && facing == FACING_WEST) return 16032;
  if (face == FACE_WALL && facing == FACING_EAST) return 16033;
  if (face == FACE_CEILING && facing == FACING_NORTH) return 16034;
  if (face == FACE_CEILING && facing == FACING_SOUTH) return 16035;
  if (face == FACE_CEILING && facing == FACING_WEST) return 16036;
  if (face == FACE_CEILING && facing == FACING_EAST) return 16037;
  return 16030;
}
