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

#include "weeping_vines_block.h"

WeepingVinesBlock::WeepingVinesBlock() = default;
WeepingVinesBlock::~WeepingVinesBlock() = default;

short WeepingVinesBlock::getId() const {
  if (age == AGE_0) return 16199;
  if (age == AGE_1) return 16200;
  if (age == AGE_2) return 16201;
  if (age == AGE_3) return 16202;
  if (age == AGE_4) return 16203;
  if (age == AGE_5) return 16204;
  if (age == AGE_6) return 16205;
  if (age == AGE_7) return 16206;
  if (age == AGE_8) return 16207;
  if (age == AGE_9) return 16208;
  if (age == AGE_10) return 16209;
  if (age == AGE_11) return 16210;
  if (age == AGE_12) return 16211;
  if (age == AGE_13) return 16212;
  if (age == AGE_14) return 16213;
  if (age == AGE_15) return 16214;
  if (age == AGE_16) return 16215;
  if (age == AGE_17) return 16216;
  if (age == AGE_18) return 16217;
  if (age == AGE_19) return 16218;
  if (age == AGE_20) return 16219;
  if (age == AGE_21) return 16220;
  if (age == AGE_22) return 16221;
  if (age == AGE_23) return 16222;
  if (age == AGE_24) return 16223;
  if (age == AGE_25) return 16224;
  return 16199;
}
