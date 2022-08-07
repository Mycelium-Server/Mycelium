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

#include "yellow_shulker_box_block.h"

YellowShulkerBoxBlock::YellowShulkerBoxBlock() = default;
YellowShulkerBoxBlock::~YellowShulkerBoxBlock() = default;

short YellowShulkerBoxBlock::getId() const {
  if (facing == FACING_NORTH) return 10183;
  if (facing == FACING_EAST) return 10184;
  if (facing == FACING_SOUTH) return 10185;
  if (facing == FACING_WEST) return 10186;
  if (facing == FACING_UP) return 10187;
  if (facing == FACING_DOWN) return 10188;
  return 10187;
}
