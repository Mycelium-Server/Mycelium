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

#include "cave_vines_block.h"

CaveVinesBlock::CaveVinesBlock() = default;
CaveVinesBlock::~CaveVinesBlock() = default;

short CaveVinesBlock::getId() const {
  if (age == AGE_0 && berries == BERRIES_TRUE) return 19659;
  if (age == AGE_0 && berries == BERRIES_FALSE) return 19660;
  if (age == AGE_1 && berries == BERRIES_TRUE) return 19661;
  if (age == AGE_1 && berries == BERRIES_FALSE) return 19662;
  if (age == AGE_2 && berries == BERRIES_TRUE) return 19663;
  if (age == AGE_2 && berries == BERRIES_FALSE) return 19664;
  if (age == AGE_3 && berries == BERRIES_TRUE) return 19665;
  if (age == AGE_3 && berries == BERRIES_FALSE) return 19666;
  if (age == AGE_4 && berries == BERRIES_TRUE) return 19667;
  if (age == AGE_4 && berries == BERRIES_FALSE) return 19668;
  if (age == AGE_5 && berries == BERRIES_TRUE) return 19669;
  if (age == AGE_5 && berries == BERRIES_FALSE) return 19670;
  if (age == AGE_6 && berries == BERRIES_TRUE) return 19671;
  if (age == AGE_6 && berries == BERRIES_FALSE) return 19672;
  if (age == AGE_7 && berries == BERRIES_TRUE) return 19673;
  if (age == AGE_7 && berries == BERRIES_FALSE) return 19674;
  if (age == AGE_8 && berries == BERRIES_TRUE) return 19675;
  if (age == AGE_8 && berries == BERRIES_FALSE) return 19676;
  if (age == AGE_9 && berries == BERRIES_TRUE) return 19677;
  if (age == AGE_9 && berries == BERRIES_FALSE) return 19678;
  if (age == AGE_10 && berries == BERRIES_TRUE) return 19679;
  if (age == AGE_10 && berries == BERRIES_FALSE) return 19680;
  if (age == AGE_11 && berries == BERRIES_TRUE) return 19681;
  if (age == AGE_11 && berries == BERRIES_FALSE) return 19682;
  if (age == AGE_12 && berries == BERRIES_TRUE) return 19683;
  if (age == AGE_12 && berries == BERRIES_FALSE) return 19684;
  if (age == AGE_13 && berries == BERRIES_TRUE) return 19685;
  if (age == AGE_13 && berries == BERRIES_FALSE) return 19686;
  if (age == AGE_14 && berries == BERRIES_TRUE) return 19687;
  if (age == AGE_14 && berries == BERRIES_FALSE) return 19688;
  if (age == AGE_15 && berries == BERRIES_TRUE) return 19689;
  if (age == AGE_15 && berries == BERRIES_FALSE) return 19690;
  if (age == AGE_16 && berries == BERRIES_TRUE) return 19691;
  if (age == AGE_16 && berries == BERRIES_FALSE) return 19692;
  if (age == AGE_17 && berries == BERRIES_TRUE) return 19693;
  if (age == AGE_17 && berries == BERRIES_FALSE) return 19694;
  if (age == AGE_18 && berries == BERRIES_TRUE) return 19695;
  if (age == AGE_18 && berries == BERRIES_FALSE) return 19696;
  if (age == AGE_19 && berries == BERRIES_TRUE) return 19697;
  if (age == AGE_19 && berries == BERRIES_FALSE) return 19698;
  if (age == AGE_20 && berries == BERRIES_TRUE) return 19699;
  if (age == AGE_20 && berries == BERRIES_FALSE) return 19700;
  if (age == AGE_21 && berries == BERRIES_TRUE) return 19701;
  if (age == AGE_21 && berries == BERRIES_FALSE) return 19702;
  if (age == AGE_22 && berries == BERRIES_TRUE) return 19703;
  if (age == AGE_22 && berries == BERRIES_FALSE) return 19704;
  if (age == AGE_23 && berries == BERRIES_TRUE) return 19705;
  if (age == AGE_23 && berries == BERRIES_FALSE) return 19706;
  if (age == AGE_24 && berries == BERRIES_TRUE) return 19707;
  if (age == AGE_24 && berries == BERRIES_FALSE) return 19708;
  if (age == AGE_25 && berries == BERRIES_TRUE) return 19709;
  if (age == AGE_25 && berries == BERRIES_FALSE) return 19710;
  return 19660;
}
