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

#include "light_block.h"

LightBlock::LightBlock() = default;
LightBlock::~LightBlock() = default;

short LightBlock::getId() const {
  if (level == LEVEL_0 && waterlogged == WATERLOGGED_TRUE) return 8246;
  if (level == LEVEL_0 && waterlogged == WATERLOGGED_FALSE) return 8247;
  if (level == LEVEL_1 && waterlogged == WATERLOGGED_TRUE) return 8248;
  if (level == LEVEL_1 && waterlogged == WATERLOGGED_FALSE) return 8249;
  if (level == LEVEL_2 && waterlogged == WATERLOGGED_TRUE) return 8250;
  if (level == LEVEL_2 && waterlogged == WATERLOGGED_FALSE) return 8251;
  if (level == LEVEL_3 && waterlogged == WATERLOGGED_TRUE) return 8252;
  if (level == LEVEL_3 && waterlogged == WATERLOGGED_FALSE) return 8253;
  if (level == LEVEL_4 && waterlogged == WATERLOGGED_TRUE) return 8254;
  if (level == LEVEL_4 && waterlogged == WATERLOGGED_FALSE) return 8255;
  if (level == LEVEL_5 && waterlogged == WATERLOGGED_TRUE) return 8256;
  if (level == LEVEL_5 && waterlogged == WATERLOGGED_FALSE) return 8257;
  if (level == LEVEL_6 && waterlogged == WATERLOGGED_TRUE) return 8258;
  if (level == LEVEL_6 && waterlogged == WATERLOGGED_FALSE) return 8259;
  if (level == LEVEL_7 && waterlogged == WATERLOGGED_TRUE) return 8260;
  if (level == LEVEL_7 && waterlogged == WATERLOGGED_FALSE) return 8261;
  if (level == LEVEL_8 && waterlogged == WATERLOGGED_TRUE) return 8262;
  if (level == LEVEL_8 && waterlogged == WATERLOGGED_FALSE) return 8263;
  if (level == LEVEL_9 && waterlogged == WATERLOGGED_TRUE) return 8264;
  if (level == LEVEL_9 && waterlogged == WATERLOGGED_FALSE) return 8265;
  if (level == LEVEL_10 && waterlogged == WATERLOGGED_TRUE) return 8266;
  if (level == LEVEL_10 && waterlogged == WATERLOGGED_FALSE) return 8267;
  if (level == LEVEL_11 && waterlogged == WATERLOGGED_TRUE) return 8268;
  if (level == LEVEL_11 && waterlogged == WATERLOGGED_FALSE) return 8269;
  if (level == LEVEL_12 && waterlogged == WATERLOGGED_TRUE) return 8270;
  if (level == LEVEL_12 && waterlogged == WATERLOGGED_FALSE) return 8271;
  if (level == LEVEL_13 && waterlogged == WATERLOGGED_TRUE) return 8272;
  if (level == LEVEL_13 && waterlogged == WATERLOGGED_FALSE) return 8273;
  if (level == LEVEL_14 && waterlogged == WATERLOGGED_TRUE) return 8274;
  if (level == LEVEL_14 && waterlogged == WATERLOGGED_FALSE) return 8275;
  if (level == LEVEL_15 && waterlogged == WATERLOGGED_TRUE) return 8276;
  if (level == LEVEL_15 && waterlogged == WATERLOGGED_FALSE) return 8277;
  return 8277;
}
