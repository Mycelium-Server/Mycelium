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


#include "beetroots_block.h"

BeetrootsBlock::BeetrootsBlock() = default;
BeetrootsBlock::~BeetrootsBlock() = default;

short BeetrootsBlock::getId() const {
  if (age == AGE_0) return 10100;
  if (age == AGE_1) return 10101;
  if (age == AGE_2) return 10102;
  if (age == AGE_3) return 10103;
  return 10100;
}

std::shared_ptr<Block> BeetrootsBlock::clone() const {
  std::shared_ptr<BeetrootsBlock> copy = std::make_shared<BeetrootsBlock>();
  copy->age = age;
  return copy;
}
