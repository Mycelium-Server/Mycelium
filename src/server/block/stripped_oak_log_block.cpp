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


#include "stripped_oak_log_block.h"

StrippedOakLogBlock::StrippedOakLogBlock() = default;
StrippedOakLogBlock::~StrippedOakLogBlock() = default;

short StrippedOakLogBlock::getId() const {
  if (axis == AXIS_X) return 158;
  if (axis == AXIS_Y) return 159;
  if (axis == AXIS_Z) return 160;
  return 159;
}

std::shared_ptr<Block> StrippedOakLogBlock::clone() const {
  std::shared_ptr<StrippedOakLogBlock> copy = std::make_shared<StrippedOakLogBlock>();
  copy->axis = axis;
  return copy;
}