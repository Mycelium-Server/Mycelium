/*
 * Mycelium
 * Copyright (C) 2022 - 2023  JNNGL
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
  return 18425 + waterlogged * 1 + lit * 2 + candles * 4;
}

std::shared_ptr<Block> PinkCandleBlock::clone() const {
  std::shared_ptr<PinkCandleBlock> copy = std::make_shared<PinkCandleBlock>();
  copy->candles = candles;
  copy->lit = lit;
  copy->waterlogged = waterlogged;
  return copy;
}
