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

#include "magenta_shulker_box_block.h"

MagentaShulkerBoxBlock::MagentaShulkerBoxBlock() = default;
MagentaShulkerBoxBlock::~MagentaShulkerBoxBlock() = default;

short MagentaShulkerBoxBlock::getId() const {
  if (facing == FACING_NORTH) return 10171;
  if (facing == FACING_EAST) return 10172;
  if (facing == FACING_SOUTH) return 10173;
  if (facing == FACING_WEST) return 10174;
  if (facing == FACING_UP) return 10175;
  if (facing == FACING_DOWN) return 10176;
  return 10175;
}
