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


#include "melon_stem_block.h"

MelonStemBlock::MelonStemBlock() = default;
MelonStemBlock::~MelonStemBlock() = default;

short MelonStemBlock::getId() const {
  if (age == AGE_0) return 5159;
  if (age == AGE_1) return 5160;
  if (age == AGE_2) return 5161;
  if (age == AGE_3) return 5162;
  if (age == AGE_4) return 5163;
  if (age == AGE_5) return 5164;
  if (age == AGE_6) return 5165;
  if (age == AGE_7) return 5166;
  return 5159;
}

std::shared_ptr<Block> MelonStemBlock::clone() const {
  std::shared_ptr<MelonStemBlock> copy = std::make_shared<MelonStemBlock>();
  copy->age = age;
  return copy;
}
