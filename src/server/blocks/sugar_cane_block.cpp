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

#include "sugar_cane_block.h"

SugarCaneBlock::SugarCaneBlock() = default;
SugarCaneBlock::~SugarCaneBlock() = default;

short SugarCaneBlock::getId() const {
  if (age == AGE_0) return 4257;
  if (age == AGE_1) return 4258;
  if (age == AGE_2) return 4259;
  if (age == AGE_3) return 4260;
  if (age == AGE_4) return 4261;
  if (age == AGE_5) return 4262;
  if (age == AGE_6) return 4263;
  if (age == AGE_7) return 4264;
  if (age == AGE_8) return 4265;
  if (age == AGE_9) return 4266;
  if (age == AGE_10) return 4267;
  if (age == AGE_11) return 4268;
  if (age == AGE_12) return 4269;
  if (age == AGE_13) return 4270;
  if (age == AGE_14) return 4271;
  if (age == AGE_15) return 4272;
  return 4257;
}
