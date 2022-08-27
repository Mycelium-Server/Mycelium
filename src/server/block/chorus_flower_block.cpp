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


#include "chorus_flower_block.h"

ChorusFlowerBlock::ChorusFlowerBlock() = default;
ChorusFlowerBlock::~ChorusFlowerBlock() = default;

short ChorusFlowerBlock::getId() const {
  if (age == AGE_0) return 10009;
  if (age == AGE_1) return 10010;
  if (age == AGE_2) return 10011;
  if (age == AGE_3) return 10012;
  if (age == AGE_4) return 10013;
  if (age == AGE_5) return 10014;
  return 10009;
}

std::shared_ptr<Block> ChorusFlowerBlock::clone() const {
  std::shared_ptr<ChorusFlowerBlock> copy = std::make_shared<ChorusFlowerBlock>();
  copy->age = age;
  return copy;
}