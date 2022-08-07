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

#include "cocoa_block.h"

CocoaBlock::CocoaBlock() = default;
CocoaBlock::~CocoaBlock() = default;

short CocoaBlock::getId() const {
  if (age == AGE_0 && facing == FACING_NORTH) return 5749;
  if (age == AGE_0 && facing == FACING_SOUTH) return 5750;
  if (age == AGE_0 && facing == FACING_WEST) return 5751;
  if (age == AGE_0 && facing == FACING_EAST) return 5752;
  if (age == AGE_1 && facing == FACING_NORTH) return 5753;
  if (age == AGE_1 && facing == FACING_SOUTH) return 5754;
  if (age == AGE_1 && facing == FACING_WEST) return 5755;
  if (age == AGE_1 && facing == FACING_EAST) return 5756;
  if (age == AGE_2 && facing == FACING_NORTH) return 5757;
  if (age == AGE_2 && facing == FACING_SOUTH) return 5758;
  if (age == AGE_2 && facing == FACING_WEST) return 5759;
  if (age == AGE_2 && facing == FACING_EAST) return 5760;
  return 5749;
}
