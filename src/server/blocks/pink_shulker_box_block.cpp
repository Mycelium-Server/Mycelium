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

#include "pink_shulker_box_block.h"

PinkShulkerBoxBlock::PinkShulkerBoxBlock() = default;
PinkShulkerBoxBlock::~PinkShulkerBoxBlock() = default;

short PinkShulkerBoxBlock::getId() const {
  if (facing == FACING_NORTH) return 10195;
  if (facing == FACING_EAST) return 10196;
  if (facing == FACING_SOUTH) return 10197;
  if (facing == FACING_WEST) return 10198;
  if (facing == FACING_UP) return 10199;
  if (facing == FACING_DOWN) return 10200;
  return 10199;
}
