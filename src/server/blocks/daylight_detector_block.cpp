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


#include "daylight_detector_block.h"

DaylightDetectorBlock::DaylightDetectorBlock() = default;
DaylightDetectorBlock::~DaylightDetectorBlock() = default;

short DaylightDetectorBlock::getId() const {
  if (inverted == INVERTED_TRUE && power == POWER_0) return 7311;
  if (inverted == INVERTED_TRUE && power == POWER_1) return 7312;
  if (inverted == INVERTED_TRUE && power == POWER_2) return 7313;
  if (inverted == INVERTED_TRUE && power == POWER_3) return 7314;
  if (inverted == INVERTED_TRUE && power == POWER_4) return 7315;
  if (inverted == INVERTED_TRUE && power == POWER_5) return 7316;
  if (inverted == INVERTED_TRUE && power == POWER_6) return 7317;
  if (inverted == INVERTED_TRUE && power == POWER_7) return 7318;
  if (inverted == INVERTED_TRUE && power == POWER_8) return 7319;
  if (inverted == INVERTED_TRUE && power == POWER_9) return 7320;
  if (inverted == INVERTED_TRUE && power == POWER_10) return 7321;
  if (inverted == INVERTED_TRUE && power == POWER_11) return 7322;
  if (inverted == INVERTED_TRUE && power == POWER_12) return 7323;
  if (inverted == INVERTED_TRUE && power == POWER_13) return 7324;
  if (inverted == INVERTED_TRUE && power == POWER_14) return 7325;
  if (inverted == INVERTED_TRUE && power == POWER_15) return 7326;
  if (inverted == INVERTED_FALSE && power == POWER_0) return 7327;
  if (inverted == INVERTED_FALSE && power == POWER_1) return 7328;
  if (inverted == INVERTED_FALSE && power == POWER_2) return 7329;
  if (inverted == INVERTED_FALSE && power == POWER_3) return 7330;
  if (inverted == INVERTED_FALSE && power == POWER_4) return 7331;
  if (inverted == INVERTED_FALSE && power == POWER_5) return 7332;
  if (inverted == INVERTED_FALSE && power == POWER_6) return 7333;
  if (inverted == INVERTED_FALSE && power == POWER_7) return 7334;
  if (inverted == INVERTED_FALSE && power == POWER_8) return 7335;
  if (inverted == INVERTED_FALSE && power == POWER_9) return 7336;
  if (inverted == INVERTED_FALSE && power == POWER_10) return 7337;
  if (inverted == INVERTED_FALSE && power == POWER_11) return 7338;
  if (inverted == INVERTED_FALSE && power == POWER_12) return 7339;
  if (inverted == INVERTED_FALSE && power == POWER_13) return 7340;
  if (inverted == INVERTED_FALSE && power == POWER_14) return 7341;
  if (inverted == INVERTED_FALSE && power == POWER_15) return 7342;
  return 7327;
}

std::shared_ptr<Block> DaylightDetectorBlock::clone() const {
  std::shared_ptr<DaylightDetectorBlock> copy = std::make_shared<DaylightDetectorBlock>();
  copy->inverted = inverted;
  copy->power = power;
  return copy;
}
