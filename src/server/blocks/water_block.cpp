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

#include "water_block.h"

WaterBlock::WaterBlock() = default;
WaterBlock::~WaterBlock() = default;

short WaterBlock::getId() const {
  if (level == LEVEL_0) return 75;
  if (level == LEVEL_1) return 76;
  if (level == LEVEL_2) return 77;
  if (level == LEVEL_3) return 78;
  if (level == LEVEL_4) return 79;
  if (level == LEVEL_5) return 80;
  if (level == LEVEL_6) return 81;
  if (level == LEVEL_7) return 82;
  if (level == LEVEL_8) return 83;
  if (level == LEVEL_9) return 84;
  if (level == LEVEL_10) return 85;
  if (level == LEVEL_11) return 86;
  if (level == LEVEL_12) return 87;
  if (level == LEVEL_13) return 88;
  if (level == LEVEL_14) return 89;
  if (level == LEVEL_15) return 90;
  return 75;
}
