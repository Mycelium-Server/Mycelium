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


#include "orange_concrete_powder_block.h"

OrangeConcretePowderBlock::OrangeConcretePowderBlock() = default;
OrangeConcretePowderBlock::~OrangeConcretePowderBlock() = default;

short OrangeConcretePowderBlock::getId() const {
  return 10336;
}

std::shared_ptr<Block> OrangeConcretePowderBlock::clone() const {
  std::shared_ptr<OrangeConcretePowderBlock> copy = std::make_shared<OrangeConcretePowderBlock>();
  return copy;
}
