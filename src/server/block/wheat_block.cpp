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


#include "wheat_block.h"

WheatBlock::WheatBlock() = default;
WheatBlock::~WheatBlock() = default;

short WheatBlock::getId() const {
  if (age == AGE_0) return 3612;
  if (age == AGE_1) return 3613;
  if (age == AGE_2) return 3614;
  if (age == AGE_3) return 3615;
  if (age == AGE_4) return 3616;
  if (age == AGE_5) return 3617;
  if (age == AGE_6) return 3618;
  if (age == AGE_7) return 3619;
  return 3612;
}

std::shared_ptr<Block> WheatBlock::clone() const {
  std::shared_ptr<WheatBlock> copy = std::make_shared<WheatBlock>();
  copy->age = age;
  return copy;
}
