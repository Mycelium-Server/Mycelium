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


#include "sweet_berry_bush_block.h"

SweetBerryBushBlock::SweetBerryBushBlock() = default;
SweetBerryBushBlock::~SweetBerryBushBlock() = default;

short SweetBerryBushBlock::getId() const {
  if (age == AGE_0) return 16163;
  if (age == AGE_1) return 16164;
  if (age == AGE_2) return 16165;
  if (age == AGE_3) return 16166;
  return 16163;
}

std::shared_ptr<Block> SweetBerryBushBlock::clone() const {
  std::shared_ptr<SweetBerryBushBlock> copy = std::make_shared<SweetBerryBushBlock>();
  copy->age = age;
  return copy;
}