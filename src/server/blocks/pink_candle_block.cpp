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

#include "pink_candle_block.h"

PinkCandleBlock::PinkCandleBlock() = default;
PinkCandleBlock::~PinkCandleBlock() = default;

short PinkCandleBlock::getId() const {
  if (candles == CANDLES_1 && lit == LIT_TRUE && waterlogged == WATERLOGGED_TRUE) return 18425;
  if (candles == CANDLES_1 && lit == LIT_TRUE && waterlogged == WATERLOGGED_FALSE) return 18426;
  if (candles == CANDLES_1 && lit == LIT_FALSE && waterlogged == WATERLOGGED_TRUE) return 18427;
  if (candles == CANDLES_1 && lit == LIT_FALSE && waterlogged == WATERLOGGED_FALSE) return 18428;
  if (candles == CANDLES_2 && lit == LIT_TRUE && waterlogged == WATERLOGGED_TRUE) return 18429;
  if (candles == CANDLES_2 && lit == LIT_TRUE && waterlogged == WATERLOGGED_FALSE) return 18430;
  if (candles == CANDLES_2 && lit == LIT_FALSE && waterlogged == WATERLOGGED_TRUE) return 18431;
  if (candles == CANDLES_2 && lit == LIT_FALSE && waterlogged == WATERLOGGED_FALSE) return 18432;
  if (candles == CANDLES_3 && lit == LIT_TRUE && waterlogged == WATERLOGGED_TRUE) return 18433;
  if (candles == CANDLES_3 && lit == LIT_TRUE && waterlogged == WATERLOGGED_FALSE) return 18434;
  if (candles == CANDLES_3 && lit == LIT_FALSE && waterlogged == WATERLOGGED_TRUE) return 18435;
  if (candles == CANDLES_3 && lit == LIT_FALSE && waterlogged == WATERLOGGED_FALSE) return 18436;
  if (candles == CANDLES_4 && lit == LIT_TRUE && waterlogged == WATERLOGGED_TRUE) return 18437;
  if (candles == CANDLES_4 && lit == LIT_TRUE && waterlogged == WATERLOGGED_FALSE) return 18438;
  if (candles == CANDLES_4 && lit == LIT_FALSE && waterlogged == WATERLOGGED_TRUE) return 18439;
  if (candles == CANDLES_4 && lit == LIT_FALSE && waterlogged == WATERLOGGED_FALSE) return 18440;
  return 18428;
}
