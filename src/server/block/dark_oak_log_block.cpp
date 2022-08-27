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


#include "dark_oak_log_block.h"

DarkOakLogBlock::DarkOakLogBlock() = default;
DarkOakLogBlock::~DarkOakLogBlock() = default;

short DarkOakLogBlock::getId() const {
  if (axis == AXIS_X) return 132;
  if (axis == AXIS_Y) return 133;
  if (axis == AXIS_Z) return 134;
  return 133;
}

std::shared_ptr<Block> DarkOakLogBlock::clone() const {
  std::shared_ptr<DarkOakLogBlock> copy = std::make_shared<DarkOakLogBlock>();
  copy->axis = axis;
  return copy;
}