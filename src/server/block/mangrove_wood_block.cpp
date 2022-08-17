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


#include "mangrove_wood_block.h"

MangroveWoodBlock::MangroveWoodBlock() = default;
MangroveWoodBlock::~MangroveWoodBlock() = default;

short MangroveWoodBlock::getId() const {
  if (axis == AXIS_X) return 182;
  if (axis == AXIS_Y) return 183;
  if (axis == AXIS_Z) return 184;
  return 183;
}

std::shared_ptr<Block> MangroveWoodBlock::clone() const {
  std::shared_ptr<MangroveWoodBlock> copy = std::make_shared<MangroveWoodBlock>();
  copy->axis = axis;
  return copy;
}
