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


#include "stripped_birch_log_block.h"

StrippedBirchLogBlock::StrippedBirchLogBlock() = default;
StrippedBirchLogBlock::~StrippedBirchLogBlock() = default;

short StrippedBirchLogBlock::getId() const {
  return 146 + axis * 1;
}

std::shared_ptr<Block> StrippedBirchLogBlock::clone() const {
  std::shared_ptr<StrippedBirchLogBlock> copy = std::make_shared<StrippedBirchLogBlock>();
  copy->axis = axis;
  return copy;
}
