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


#include "dark_oak_leaves_block.h"

DarkOakLeavesBlock::DarkOakLeavesBlock() = default;
DarkOakLeavesBlock::~DarkOakLeavesBlock() = default;

short DarkOakLeavesBlock::getId() const {
  return 346 + waterlogged * 1 + persistent * 2 + distance * 4;
}

std::shared_ptr<Block> DarkOakLeavesBlock::clone() const {
  std::shared_ptr<DarkOakLeavesBlock> copy = std::make_shared<DarkOakLeavesBlock>();
  copy->distance = distance;
  copy->persistent = persistent;
  copy->waterlogged = waterlogged;
  return copy;
}
