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


#include "sea_pickle_block.h"

SeaPickleBlock::SeaPickleBlock() = default;
SeaPickleBlock::~SeaPickleBlock() = default;

short SeaPickleBlock::getId() const {
  if (pickles == PICKLES_1 && waterlogged == WATERLOGGED_TRUE) return 10521;
  if (pickles == PICKLES_1 && waterlogged == WATERLOGGED_FALSE) return 10522;
  if (pickles == PICKLES_2 && waterlogged == WATERLOGGED_TRUE) return 10523;
  if (pickles == PICKLES_2 && waterlogged == WATERLOGGED_FALSE) return 10524;
  if (pickles == PICKLES_3 && waterlogged == WATERLOGGED_TRUE) return 10525;
  if (pickles == PICKLES_3 && waterlogged == WATERLOGGED_FALSE) return 10526;
  if (pickles == PICKLES_4 && waterlogged == WATERLOGGED_TRUE) return 10527;
  if (pickles == PICKLES_4 && waterlogged == WATERLOGGED_FALSE) return 10528;
  return 10521;
}

std::shared_ptr<Block> SeaPickleBlock::clone() const {
  std::shared_ptr<SeaPickleBlock> copy = std::make_shared<SeaPickleBlock>();
  copy->pickles = pickles;
  copy->waterlogged = waterlogged;
  return copy;
}
