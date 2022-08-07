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

#include "black_candle_block.h"

BlackCandleBlock::BlackCandleBlock() = default;
BlackCandleBlock::~BlackCandleBlock() = default;

short BlackCandleBlock::getId() const {
  if (candles == CANDLES_1 && lit == LIT_TRUE && waterlogged == WATERLOGGED_TRUE) return 18569;
  if (candles == CANDLES_1 && lit == LIT_TRUE && waterlogged == WATERLOGGED_FALSE) return 18570;
  if (candles == CANDLES_1 && lit == LIT_FALSE && waterlogged == WATERLOGGED_TRUE) return 18571;
  if (candles == CANDLES_1 && lit == LIT_FALSE && waterlogged == WATERLOGGED_FALSE) return 18572;
  if (candles == CANDLES_2 && lit == LIT_TRUE && waterlogged == WATERLOGGED_TRUE) return 18573;
  if (candles == CANDLES_2 && lit == LIT_TRUE && waterlogged == WATERLOGGED_FALSE) return 18574;
  if (candles == CANDLES_2 && lit == LIT_FALSE && waterlogged == WATERLOGGED_TRUE) return 18575;
  if (candles == CANDLES_2 && lit == LIT_FALSE && waterlogged == WATERLOGGED_FALSE) return 18576;
  if (candles == CANDLES_3 && lit == LIT_TRUE && waterlogged == WATERLOGGED_TRUE) return 18577;
  if (candles == CANDLES_3 && lit == LIT_TRUE && waterlogged == WATERLOGGED_FALSE) return 18578;
  if (candles == CANDLES_3 && lit == LIT_FALSE && waterlogged == WATERLOGGED_TRUE) return 18579;
  if (candles == CANDLES_3 && lit == LIT_FALSE && waterlogged == WATERLOGGED_FALSE) return 18580;
  if (candles == CANDLES_4 && lit == LIT_TRUE && waterlogged == WATERLOGGED_TRUE) return 18581;
  if (candles == CANDLES_4 && lit == LIT_TRUE && waterlogged == WATERLOGGED_FALSE) return 18582;
  if (candles == CANDLES_4 && lit == LIT_FALSE && waterlogged == WATERLOGGED_TRUE) return 18583;
  if (candles == CANDLES_4 && lit == LIT_FALSE && waterlogged == WATERLOGGED_FALSE) return 18584;
  return 18572;
}
