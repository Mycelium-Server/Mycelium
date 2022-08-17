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


#include "oak_wood_block.h"

OakWoodBlock::OakWoodBlock() = default;
OakWoodBlock::~OakWoodBlock() = default;

short OakWoodBlock::getId() const {
  if (axis == AXIS_X) return 164;
  if (axis == AXIS_Y) return 165;
  if (axis == AXIS_Z) return 166;
  return 165;
}

std::shared_ptr<Block> OakWoodBlock::clone() const {
  std::shared_ptr<OakWoodBlock> copy = std::make_shared<OakWoodBlock>();
  copy->axis = axis;
  return copy;
}
