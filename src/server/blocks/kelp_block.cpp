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


#include "kelp_block.h"

KelpBlock::KelpBlock() = default;
KelpBlock::~KelpBlock() = default;

short KelpBlock::getId() const {
  if (age == AGE_0) return 10351;
  if (age == AGE_1) return 10352;
  if (age == AGE_2) return 10353;
  if (age == AGE_3) return 10354;
  if (age == AGE_4) return 10355;
  if (age == AGE_5) return 10356;
  if (age == AGE_6) return 10357;
  if (age == AGE_7) return 10358;
  if (age == AGE_8) return 10359;
  if (age == AGE_9) return 10360;
  if (age == AGE_10) return 10361;
  if (age == AGE_11) return 10362;
  if (age == AGE_12) return 10363;
  if (age == AGE_13) return 10364;
  if (age == AGE_14) return 10365;
  if (age == AGE_15) return 10366;
  if (age == AGE_16) return 10367;
  if (age == AGE_17) return 10368;
  if (age == AGE_18) return 10369;
  if (age == AGE_19) return 10370;
  if (age == AGE_20) return 10371;
  if (age == AGE_21) return 10372;
  if (age == AGE_22) return 10373;
  if (age == AGE_23) return 10374;
  if (age == AGE_24) return 10375;
  if (age == AGE_25) return 10376;
  return 10351;
}

std::shared_ptr<Block> KelpBlock::clone() const {
  std::shared_ptr<KelpBlock> copy = std::make_shared<KelpBlock>();
  copy->age = age;
  return copy;
}
