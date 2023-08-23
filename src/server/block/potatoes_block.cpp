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


#include "potatoes_block.h"

PotatoesBlock::PotatoesBlock() = default;
PotatoesBlock::~PotatoesBlock() = default;

short PotatoesBlock::getId() const {
  return 6931 + age * 1;
}

std::shared_ptr<Block> PotatoesBlock::clone() const {
  std::shared_ptr<PotatoesBlock> copy = std::make_shared<PotatoesBlock>();
  copy->age = age;
  return copy;
}
