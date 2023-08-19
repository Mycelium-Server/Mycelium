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


#include "peony_block.h"

PeonyBlock::PeonyBlock() = default;
PeonyBlock::~PeonyBlock() = default;

short PeonyBlock::getId() const {
  return 8632 + half * 1;
}

std::shared_ptr<Block> PeonyBlock::clone() const {
  std::shared_ptr<PeonyBlock> copy = std::make_shared<PeonyBlock>();
  copy->half = half;
  return copy;
}
