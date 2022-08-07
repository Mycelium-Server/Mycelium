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

#include "large_amethyst_bud_block.h"

LargeAmethystBudBlock::LargeAmethystBudBlock() = default;
LargeAmethystBudBlock::~LargeAmethystBudBlock() = default;

short LargeAmethystBudBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 18633;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 18634;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 18635;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 18636;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 18637;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 18638;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 18639;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 18640;
  if (facing == FACING_UP && waterlogged == WATERLOGGED_TRUE) return 18641;
  if (facing == FACING_UP && waterlogged == WATERLOGGED_FALSE) return 18642;
  if (facing == FACING_DOWN && waterlogged == WATERLOGGED_TRUE) return 18643;
  if (facing == FACING_DOWN && waterlogged == WATERLOGGED_FALSE) return 18644;
  return 18642;
}
