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


#include "bamboo_block.h"

BambooBlock::BambooBlock() = default;
BambooBlock::~BambooBlock() = default;

short BambooBlock::getId() const {
  return 10533 + stage * 1 + leaves * 2 + age * 6;
}

std::shared_ptr<Block> BambooBlock::clone() const {
  std::shared_ptr<BambooBlock> copy = std::make_shared<BambooBlock>();
  copy->age = age;
  copy->leaves = leaves;
  copy->stage = stage;
  return copy;
}
