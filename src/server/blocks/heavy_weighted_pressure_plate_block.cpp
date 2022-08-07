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

#include "heavy_weighted_pressure_plate_block.h"

HeavyWeightedPressurePlateBlock::HeavyWeightedPressurePlateBlock() = default;
HeavyWeightedPressurePlateBlock::~HeavyWeightedPressurePlateBlock() = default;

short HeavyWeightedPressurePlateBlock::getId() const {
  if (power == POWER_0) return 7279;
  if (power == POWER_1) return 7280;
  if (power == POWER_2) return 7281;
  if (power == POWER_3) return 7282;
  if (power == POWER_4) return 7283;
  if (power == POWER_5) return 7284;
  if (power == POWER_6) return 7285;
  if (power == POWER_7) return 7286;
  if (power == POWER_8) return 7287;
  if (power == POWER_9) return 7288;
  if (power == POWER_10) return 7289;
  if (power == POWER_11) return 7290;
  if (power == POWER_12) return 7291;
  if (power == POWER_13) return 7292;
  if (power == POWER_14) return 7293;
  if (power == POWER_15) return 7294;
  return 7279;
}
