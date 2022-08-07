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

#include "bamboo_block.h"

BambooBlock::BambooBlock() = default;
BambooBlock::~BambooBlock() = default;

short BambooBlock::getId() const {
  if (age == AGE_0 && leaves == LEAVES_NONE && stage == STAGE_0) return 10533;
  if (age == AGE_0 && leaves == LEAVES_NONE && stage == STAGE_1) return 10534;
  if (age == AGE_0 && leaves == LEAVES_SMALL && stage == STAGE_0) return 10535;
  if (age == AGE_0 && leaves == LEAVES_SMALL && stage == STAGE_1) return 10536;
  if (age == AGE_0 && leaves == LEAVES_LARGE && stage == STAGE_0) return 10537;
  if (age == AGE_0 && leaves == LEAVES_LARGE && stage == STAGE_1) return 10538;
  if (age == AGE_1 && leaves == LEAVES_NONE && stage == STAGE_0) return 10539;
  if (age == AGE_1 && leaves == LEAVES_NONE && stage == STAGE_1) return 10540;
  if (age == AGE_1 && leaves == LEAVES_SMALL && stage == STAGE_0) return 10541;
  if (age == AGE_1 && leaves == LEAVES_SMALL && stage == STAGE_1) return 10542;
  if (age == AGE_1 && leaves == LEAVES_LARGE && stage == STAGE_0) return 10543;
  if (age == AGE_1 && leaves == LEAVES_LARGE && stage == STAGE_1) return 10544;
  return 10533;
}
