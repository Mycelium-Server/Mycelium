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


#include "polished_andesite_stairs_block.h"

PolishedAndesiteStairsBlock::PolishedAndesiteStairsBlock() = default;
PolishedAndesiteStairsBlock::~PolishedAndesiteStairsBlock() = default;

short PolishedAndesiteStairsBlock::getId() const {
  return 11510 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> PolishedAndesiteStairsBlock::clone() const {
  std::shared_ptr<PolishedAndesiteStairsBlock> copy = std::make_shared<PolishedAndesiteStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
