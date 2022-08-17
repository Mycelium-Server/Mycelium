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


#include "target_block.h"

TargetBlock::TargetBlock() = default;
TargetBlock::~TargetBlock() = default;

short TargetBlock::getId() const {
  if (power == POWER_0) return 16969;
  if (power == POWER_1) return 16970;
  if (power == POWER_2) return 16971;
  if (power == POWER_3) return 16972;
  if (power == POWER_4) return 16973;
  if (power == POWER_5) return 16974;
  if (power == POWER_6) return 16975;
  if (power == POWER_7) return 16976;
  if (power == POWER_8) return 16977;
  if (power == POWER_9) return 16978;
  if (power == POWER_10) return 16979;
  if (power == POWER_11) return 16980;
  if (power == POWER_12) return 16981;
  if (power == POWER_13) return 16982;
  if (power == POWER_14) return 16983;
  if (power == POWER_15) return 16984;
  return 16969;
}

std::shared_ptr<Block> TargetBlock::clone() const {
  std::shared_ptr<TargetBlock> copy = std::make_shared<TargetBlock>();
  copy->power = power;
  return copy;
}
