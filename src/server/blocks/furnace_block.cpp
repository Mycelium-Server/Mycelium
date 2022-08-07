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

#include "furnace_block.h"

FurnaceBlock::FurnaceBlock() = default;
FurnaceBlock::~FurnaceBlock() = default;

short FurnaceBlock::getId() const {
  if (facing == FACING_NORTH && lit == LIT_TRUE) return 3628;
  if (facing == FACING_NORTH && lit == LIT_FALSE) return 3629;
  if (facing == FACING_SOUTH && lit == LIT_TRUE) return 3630;
  if (facing == FACING_SOUTH && lit == LIT_FALSE) return 3631;
  if (facing == FACING_WEST && lit == LIT_TRUE) return 3632;
  if (facing == FACING_WEST && lit == LIT_FALSE) return 3633;
  if (facing == FACING_EAST && lit == LIT_TRUE) return 3634;
  if (facing == FACING_EAST && lit == LIT_FALSE) return 3635;
  return 3629;
}
