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


#include "potted_wither_rose_block.h"

PottedWitherRoseBlock::PottedWitherRoseBlock() = default;
PottedWitherRoseBlock::~PottedWitherRoseBlock() = default;

short PottedWitherRoseBlock::getId() const {
  return 6918;
}

std::shared_ptr<Block> PottedWitherRoseBlock::clone() const {
  std::shared_ptr<PottedWitherRoseBlock> copy = std::make_shared<PottedWitherRoseBlock>();
  return copy;
}
