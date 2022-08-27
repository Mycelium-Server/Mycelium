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


#include "stripped_spruce_log_block.h"

StrippedSpruceLogBlock::StrippedSpruceLogBlock() = default;
StrippedSpruceLogBlock::~StrippedSpruceLogBlock() = default;

short StrippedSpruceLogBlock::getId() const {
  if (axis == AXIS_X) return 143;
  if (axis == AXIS_Y) return 144;
  if (axis == AXIS_Z) return 145;
  return 144;
}

std::shared_ptr<Block> StrippedSpruceLogBlock::clone() const {
  std::shared_ptr<StrippedSpruceLogBlock> copy = std::make_shared<StrippedSpruceLogBlock>();
  copy->axis = axis;
  return copy;
}