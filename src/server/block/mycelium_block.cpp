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


#include "mycelium_block.h"

MyceliumBlock::MyceliumBlock() = default;
MyceliumBlock::~MyceliumBlock() = default;

short MyceliumBlock::getId() const {
  return 5599 + snowy * 1;
}

std::shared_ptr<Block> MyceliumBlock::clone() const {
  std::shared_ptr<MyceliumBlock> copy = std::make_shared<MyceliumBlock>();
  copy->snowy = snowy;
  return copy;
}
