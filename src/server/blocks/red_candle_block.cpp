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

#include "red_candle_block.h"

RedCandleBlock::RedCandleBlock() = default;
RedCandleBlock::~RedCandleBlock() = default;

short RedCandleBlock::getId() const {
  if (candles == CANDLES_1 && lit == LIT_TRUE && waterlogged == WATERLOGGED_TRUE) return 18553;
  if (candles == CANDLES_1 && lit == LIT_TRUE && waterlogged == WATERLOGGED_FALSE) return 18554;
  if (candles == CANDLES_1 && lit == LIT_FALSE && waterlogged == WATERLOGGED_TRUE) return 18555;
  if (candles == CANDLES_1 && lit == LIT_FALSE && waterlogged == WATERLOGGED_FALSE) return 18556;
  if (candles == CANDLES_2 && lit == LIT_TRUE && waterlogged == WATERLOGGED_TRUE) return 18557;
  if (candles == CANDLES_2 && lit == LIT_TRUE && waterlogged == WATERLOGGED_FALSE) return 18558;
  if (candles == CANDLES_2 && lit == LIT_FALSE && waterlogged == WATERLOGGED_TRUE) return 18559;
  if (candles == CANDLES_2 && lit == LIT_FALSE && waterlogged == WATERLOGGED_FALSE) return 18560;
  if (candles == CANDLES_3 && lit == LIT_TRUE && waterlogged == WATERLOGGED_TRUE) return 18561;
  if (candles == CANDLES_3 && lit == LIT_TRUE && waterlogged == WATERLOGGED_FALSE) return 18562;
  if (candles == CANDLES_3 && lit == LIT_FALSE && waterlogged == WATERLOGGED_TRUE) return 18563;
  if (candles == CANDLES_3 && lit == LIT_FALSE && waterlogged == WATERLOGGED_FALSE) return 18564;
  if (candles == CANDLES_4 && lit == LIT_TRUE && waterlogged == WATERLOGGED_TRUE) return 18565;
  if (candles == CANDLES_4 && lit == LIT_TRUE && waterlogged == WATERLOGGED_FALSE) return 18566;
  if (candles == CANDLES_4 && lit == LIT_FALSE && waterlogged == WATERLOGGED_TRUE) return 18567;
  if (candles == CANDLES_4 && lit == LIT_FALSE && waterlogged == WATERLOGGED_FALSE) return 18568;
  return 18556;
}
