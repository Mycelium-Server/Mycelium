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

#include "purple_glazed_terracotta_block.h"

PurpleGlazedTerracottaBlock::PurpleGlazedTerracottaBlock() = default;
PurpleGlazedTerracottaBlock::~PurpleGlazedTerracottaBlock() = default;

short PurpleGlazedTerracottaBlock::getId() const {
  if (facing == FACING_NORTH) return 10295;
  if (facing == FACING_SOUTH) return 10296;
  if (facing == FACING_WEST) return 10297;
  if (facing == FACING_EAST) return 10298;
  return 10295;
}
