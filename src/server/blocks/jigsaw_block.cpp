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

#include "jigsaw_block.h"

JigsawBlock::JigsawBlock() = default;
JigsawBlock::~JigsawBlock() = default;

short JigsawBlock::getId() const {
  if (orientation == ORIENTATION_DOWN_EAST) return 16948;
  if (orientation == ORIENTATION_DOWN_NORTH) return 16949;
  if (orientation == ORIENTATION_DOWN_SOUTH) return 16950;
  if (orientation == ORIENTATION_DOWN_WEST) return 16951;
  if (orientation == ORIENTATION_UP_EAST) return 16952;
  if (orientation == ORIENTATION_UP_NORTH) return 16953;
  if (orientation == ORIENTATION_UP_SOUTH) return 16954;
  if (orientation == ORIENTATION_UP_WEST) return 16955;
  if (orientation == ORIENTATION_WEST_UP) return 16956;
  if (orientation == ORIENTATION_EAST_UP) return 16957;
  if (orientation == ORIENTATION_NORTH_UP) return 16958;
  if (orientation == ORIENTATION_SOUTH_UP) return 16959;
  return 16958;
}
