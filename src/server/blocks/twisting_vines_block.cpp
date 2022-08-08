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


#include "twisting_vines_block.h"

TwistingVinesBlock::TwistingVinesBlock() = default;
TwistingVinesBlock::~TwistingVinesBlock() = default;

short TwistingVinesBlock::getId() const {
  if (age == AGE_0) return 16226;
  if (age == AGE_1) return 16227;
  if (age == AGE_2) return 16228;
  if (age == AGE_3) return 16229;
  if (age == AGE_4) return 16230;
  if (age == AGE_5) return 16231;
  if (age == AGE_6) return 16232;
  if (age == AGE_7) return 16233;
  if (age == AGE_8) return 16234;
  if (age == AGE_9) return 16235;
  if (age == AGE_10) return 16236;
  if (age == AGE_11) return 16237;
  if (age == AGE_12) return 16238;
  if (age == AGE_13) return 16239;
  if (age == AGE_14) return 16240;
  if (age == AGE_15) return 16241;
  if (age == AGE_16) return 16242;
  if (age == AGE_17) return 16243;
  if (age == AGE_18) return 16244;
  if (age == AGE_19) return 16245;
  if (age == AGE_20) return 16246;
  if (age == AGE_21) return 16247;
  if (age == AGE_22) return 16248;
  if (age == AGE_23) return 16249;
  if (age == AGE_24) return 16250;
  if (age == AGE_25) return 16251;
  return 16226;
}

std::shared_ptr<Block> TwistingVinesBlock::clone() const {
  std::shared_ptr<TwistingVinesBlock> copy = std::make_shared<TwistingVinesBlock>();
  copy->age = age;
  return copy;
}
