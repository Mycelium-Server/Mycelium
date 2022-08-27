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


#include "purple_candle_cake_block.h"

PurpleCandleCakeBlock::PurpleCandleCakeBlock() = default;
PurpleCandleCakeBlock::~PurpleCandleCakeBlock() = default;

short PurpleCandleCakeBlock::getId() const {
  if (lit == LIT_TRUE) return 18607;
  if (lit == LIT_FALSE) return 18608;
  return 18608;
}

std::shared_ptr<Block> PurpleCandleCakeBlock::clone() const {
  std::shared_ptr<PurpleCandleCakeBlock> copy = std::make_shared<PurpleCandleCakeBlock>();
  copy->lit = lit;
  return copy;
}