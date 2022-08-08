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


#include "stripped_warped_stem_block.h"

StrippedWarpedStemBlock::StrippedWarpedStemBlock() = default;
StrippedWarpedStemBlock::~StrippedWarpedStemBlock() = default;

short StrippedWarpedStemBlock::getId() const {
  if (axis == AXIS_X) return 16170;
  if (axis == AXIS_Y) return 16171;
  if (axis == AXIS_Z) return 16172;
  return 16171;
}

std::shared_ptr<Block> StrippedWarpedStemBlock::clone() const {
  std::shared_ptr<StrippedWarpedStemBlock> copy = std::make_shared<StrippedWarpedStemBlock>();
  copy->axis = axis;
  return copy;
}
