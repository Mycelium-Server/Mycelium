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

#include "stonecutter_block.h"

StonecutterBlock::StonecutterBlock() = default;
StonecutterBlock::~StonecutterBlock() = default;

short StonecutterBlock::getId() const {
  if (facing == FACING_NORTH) return 16055;
  if (facing == FACING_SOUTH) return 16056;
  if (facing == FACING_WEST) return 16057;
  if (facing == FACING_EAST) return 16058;
  return 16055;
}
