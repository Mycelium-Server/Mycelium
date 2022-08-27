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


#include "white_candle_cake_block.h"

WhiteCandleCakeBlock::WhiteCandleCakeBlock() = default;
WhiteCandleCakeBlock::~WhiteCandleCakeBlock() = default;

short WhiteCandleCakeBlock::getId() const {
  if (lit == LIT_TRUE) return 18587;
  if (lit == LIT_FALSE) return 18588;
  return 18588;
}

std::shared_ptr<Block> WhiteCandleCakeBlock::clone() const {
  std::shared_ptr<WhiteCandleCakeBlock> copy = std::make_shared<WhiteCandleCakeBlock>();
  copy->lit = lit;
  return copy;
}