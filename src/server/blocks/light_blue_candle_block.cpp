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

#include "light_blue_candle_block.h"

LightBlueCandleBlock::LightBlueCandleBlock() = default;
LightBlueCandleBlock::~LightBlueCandleBlock() = default;

short LightBlueCandleBlock::getId() const {
  if (candles == CANDLES_1 && lit == LIT_TRUE && waterlogged == WATERLOGGED_TRUE) return 18377;
  if (candles == CANDLES_1 && lit == LIT_TRUE && waterlogged == WATERLOGGED_FALSE) return 18378;
  if (candles == CANDLES_1 && lit == LIT_FALSE && waterlogged == WATERLOGGED_TRUE) return 18379;
  if (candles == CANDLES_1 && lit == LIT_FALSE && waterlogged == WATERLOGGED_FALSE) return 18380;
  if (candles == CANDLES_2 && lit == LIT_TRUE && waterlogged == WATERLOGGED_TRUE) return 18381;
  if (candles == CANDLES_2 && lit == LIT_TRUE && waterlogged == WATERLOGGED_FALSE) return 18382;
  if (candles == CANDLES_2 && lit == LIT_FALSE && waterlogged == WATERLOGGED_TRUE) return 18383;
  if (candles == CANDLES_2 && lit == LIT_FALSE && waterlogged == WATERLOGGED_FALSE) return 18384;
  if (candles == CANDLES_3 && lit == LIT_TRUE && waterlogged == WATERLOGGED_TRUE) return 18385;
  if (candles == CANDLES_3 && lit == LIT_TRUE && waterlogged == WATERLOGGED_FALSE) return 18386;
  if (candles == CANDLES_3 && lit == LIT_FALSE && waterlogged == WATERLOGGED_TRUE) return 18387;
  if (candles == CANDLES_3 && lit == LIT_FALSE && waterlogged == WATERLOGGED_FALSE) return 18388;
  if (candles == CANDLES_4 && lit == LIT_TRUE && waterlogged == WATERLOGGED_TRUE) return 18389;
  if (candles == CANDLES_4 && lit == LIT_TRUE && waterlogged == WATERLOGGED_FALSE) return 18390;
  if (candles == CANDLES_4 && lit == LIT_FALSE && waterlogged == WATERLOGGED_TRUE) return 18391;
  if (candles == CANDLES_4 && lit == LIT_FALSE && waterlogged == WATERLOGGED_FALSE) return 18392;
  return 18380;
}
