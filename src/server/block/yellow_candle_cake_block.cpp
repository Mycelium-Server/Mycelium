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


#include "yellow_candle_cake_block.h"

YellowCandleCakeBlock::YellowCandleCakeBlock() = default;
YellowCandleCakeBlock::~YellowCandleCakeBlock() = default;

short YellowCandleCakeBlock::getId() const {
  if (lit == LIT_TRUE) return 18595;
  if (lit == LIT_FALSE) return 18596;
  return 18596;
}

std::shared_ptr<Block> YellowCandleCakeBlock::clone() const {
  std::shared_ptr<YellowCandleCakeBlock> copy = std::make_shared<YellowCandleCakeBlock>();
  copy->lit = lit;
  return copy;
}