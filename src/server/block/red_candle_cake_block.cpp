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


#include "red_candle_cake_block.h"

RedCandleCakeBlock::RedCandleCakeBlock() = default;
RedCandleCakeBlock::~RedCandleCakeBlock() = default;

short RedCandleCakeBlock::getId() const {
  return 18615 + lit * 1;
}

std::shared_ptr<Block> RedCandleCakeBlock::clone() const {
  std::shared_ptr<RedCandleCakeBlock> copy = std::make_shared<RedCandleCakeBlock>();
  copy->lit = lit;
  return copy;
}
