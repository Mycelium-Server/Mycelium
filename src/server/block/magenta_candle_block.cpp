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


#include "magenta_candle_block.h"

MagentaCandleBlock::MagentaCandleBlock() = default;
MagentaCandleBlock::~MagentaCandleBlock() = default;

short MagentaCandleBlock::getId() const {
  if (candles == CANDLES_1 && lit == LIT_TRUE && waterlogged == WATERLOGGED_TRUE) return 18361;
  if (candles == CANDLES_1 && lit == LIT_TRUE && waterlogged == WATERLOGGED_FALSE) return 18362;
  if (candles == CANDLES_1 && lit == LIT_FALSE && waterlogged == WATERLOGGED_TRUE) return 18363;
  if (candles == CANDLES_1 && lit == LIT_FALSE && waterlogged == WATERLOGGED_FALSE) return 18364;
  if (candles == CANDLES_2 && lit == LIT_TRUE && waterlogged == WATERLOGGED_TRUE) return 18365;
  if (candles == CANDLES_2 && lit == LIT_TRUE && waterlogged == WATERLOGGED_FALSE) return 18366;
  if (candles == CANDLES_2 && lit == LIT_FALSE && waterlogged == WATERLOGGED_TRUE) return 18367;
  if (candles == CANDLES_2 && lit == LIT_FALSE && waterlogged == WATERLOGGED_FALSE) return 18368;
  if (candles == CANDLES_3 && lit == LIT_TRUE && waterlogged == WATERLOGGED_TRUE) return 18369;
  if (candles == CANDLES_3 && lit == LIT_TRUE && waterlogged == WATERLOGGED_FALSE) return 18370;
  if (candles == CANDLES_3 && lit == LIT_FALSE && waterlogged == WATERLOGGED_TRUE) return 18371;
  if (candles == CANDLES_3 && lit == LIT_FALSE && waterlogged == WATERLOGGED_FALSE) return 18372;
  if (candles == CANDLES_4 && lit == LIT_TRUE && waterlogged == WATERLOGGED_TRUE) return 18373;
  if (candles == CANDLES_4 && lit == LIT_TRUE && waterlogged == WATERLOGGED_FALSE) return 18374;
  if (candles == CANDLES_4 && lit == LIT_FALSE && waterlogged == WATERLOGGED_TRUE) return 18375;
  if (candles == CANDLES_4 && lit == LIT_FALSE && waterlogged == WATERLOGGED_FALSE) return 18376;
  return 18364;
}

std::shared_ptr<Block> MagentaCandleBlock::clone() const {
  std::shared_ptr<MagentaCandleBlock> copy = std::make_shared<MagentaCandleBlock>();
  copy->candles = candles;
  copy->lit = lit;
  copy->waterlogged = waterlogged;
  return copy;
}
