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


#include "end_stone_brick_slab_block.h"

EndStoneBrickSlabBlock::EndStoneBrickSlabBlock() = default;
EndStoneBrickSlabBlock::~EndStoneBrickSlabBlock() = default;

short EndStoneBrickSlabBlock::getId() const {
  return 11700 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> EndStoneBrickSlabBlock::clone() const {
  std::shared_ptr<EndStoneBrickSlabBlock> copy = std::make_shared<EndStoneBrickSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
