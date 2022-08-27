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


#include "acacia_wood_block.h"

AcaciaWoodBlock::AcaciaWoodBlock() = default;
AcaciaWoodBlock::~AcaciaWoodBlock() = default;

short AcaciaWoodBlock::getId() const {
  if (axis == AXIS_X) return 176;
  if (axis == AXIS_Y) return 177;
  if (axis == AXIS_Z) return 178;
  return 177;
}

std::shared_ptr<Block> AcaciaWoodBlock::clone() const {
  std::shared_ptr<AcaciaWoodBlock> copy = std::make_shared<AcaciaWoodBlock>();
  copy->axis = axis;
  return copy;
}