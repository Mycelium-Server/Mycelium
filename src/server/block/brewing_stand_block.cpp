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


#include "brewing_stand_block.h"

BrewingStandBlock::BrewingStandBlock() = default;
BrewingStandBlock::~BrewingStandBlock() = default;

short BrewingStandBlock::getId() const {
  if (has_bottle_0 == HAS_BOTTLE_0_TRUE && has_bottle_1 == HAS_BOTTLE_1_TRUE && has_bottle_2 == HAS_BOTTLE_2_TRUE) return 5720;
  if (has_bottle_0 == HAS_BOTTLE_0_TRUE && has_bottle_1 == HAS_BOTTLE_1_TRUE && has_bottle_2 == HAS_BOTTLE_2_FALSE) return 5721;
  if (has_bottle_0 == HAS_BOTTLE_0_TRUE && has_bottle_1 == HAS_BOTTLE_1_FALSE && has_bottle_2 == HAS_BOTTLE_2_TRUE) return 5722;
  if (has_bottle_0 == HAS_BOTTLE_0_TRUE && has_bottle_1 == HAS_BOTTLE_1_FALSE && has_bottle_2 == HAS_BOTTLE_2_FALSE) return 5723;
  if (has_bottle_0 == HAS_BOTTLE_0_FALSE && has_bottle_1 == HAS_BOTTLE_1_TRUE && has_bottle_2 == HAS_BOTTLE_2_TRUE) return 5724;
  if (has_bottle_0 == HAS_BOTTLE_0_FALSE && has_bottle_1 == HAS_BOTTLE_1_TRUE && has_bottle_2 == HAS_BOTTLE_2_FALSE) return 5725;
  if (has_bottle_0 == HAS_BOTTLE_0_FALSE && has_bottle_1 == HAS_BOTTLE_1_FALSE && has_bottle_2 == HAS_BOTTLE_2_TRUE) return 5726;
  if (has_bottle_0 == HAS_BOTTLE_0_FALSE && has_bottle_1 == HAS_BOTTLE_1_FALSE && has_bottle_2 == HAS_BOTTLE_2_FALSE) return 5727;
  return 5727;
}

std::shared_ptr<Block> BrewingStandBlock::clone() const {
  std::shared_ptr<BrewingStandBlock> copy = std::make_shared<BrewingStandBlock>();
  copy->has_bottle_0 = has_bottle_0;
  copy->has_bottle_1 = has_bottle_1;
  copy->has_bottle_2 = has_bottle_2;
  return copy;
}
