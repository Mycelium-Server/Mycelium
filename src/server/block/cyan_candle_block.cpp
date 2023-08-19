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


#include "cyan_candle_block.h"

CyanCandleBlock::CyanCandleBlock() = default;
CyanCandleBlock::~CyanCandleBlock() = default;

short CyanCandleBlock::getId() const {
  return 18473 + waterlogged * 1 + lit * 2 + candles * 4;
}

std::shared_ptr<Block> CyanCandleBlock::clone() const {
  std::shared_ptr<CyanCandleBlock> copy = std::make_shared<CyanCandleBlock>();
  copy->candles = candles;
  copy->lit = lit;
  copy->waterlogged = waterlogged;
  return copy;
}
