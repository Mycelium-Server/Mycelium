/*
 * Mycelium
 * Copyright (C) 2022 - 2023  JNNGL
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


#include "comparator_block.h"

ComparatorBlock::ComparatorBlock() = default;
ComparatorBlock::~ComparatorBlock() = default;

short ComparatorBlock::getId() const {
  return 7295 + powered * 1 + mode * 2 + facing * 4;
}

std::shared_ptr<Block> ComparatorBlock::clone() const {
  std::shared_ptr<ComparatorBlock> copy = std::make_shared<ComparatorBlock>();
  copy->facing = facing;
  copy->mode = mode;
  copy->powered = powered;
  return copy;
}
