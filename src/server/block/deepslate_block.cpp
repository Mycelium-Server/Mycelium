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


#include "deepslate_block.h"

DeepslateBlock::DeepslateBlock() = default;
DeepslateBlock::~DeepslateBlock() = default;

short DeepslateBlock::getId() const {
  if (axis == AXIS_X) return 19778;
  if (axis == AXIS_Y) return 19779;
  if (axis == AXIS_Z) return 19780;
  return 19779;
}

std::shared_ptr<Block> DeepslateBlock::clone() const {
  std::shared_ptr<DeepslateBlock> copy = std::make_shared<DeepslateBlock>();
  copy->axis = axis;
  return copy;
}