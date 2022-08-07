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

#include "light_weighted_pressure_plate_block.h"

LightWeightedPressurePlateBlock::LightWeightedPressurePlateBlock() = default;
LightWeightedPressurePlateBlock::~LightWeightedPressurePlateBlock() = default;

short LightWeightedPressurePlateBlock::getId() const {
  if (power == POWER_0) return 7263;
  if (power == POWER_1) return 7264;
  if (power == POWER_2) return 7265;
  if (power == POWER_3) return 7266;
  if (power == POWER_4) return 7267;
  if (power == POWER_5) return 7268;
  if (power == POWER_6) return 7269;
  if (power == POWER_7) return 7270;
  if (power == POWER_8) return 7271;
  if (power == POWER_9) return 7272;
  if (power == POWER_10) return 7273;
  if (power == POWER_11) return 7274;
  if (power == POWER_12) return 7275;
  if (power == POWER_13) return 7276;
  if (power == POWER_14) return 7277;
  if (power == POWER_15) return 7278;
  return 7263;
}
