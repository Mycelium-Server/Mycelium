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


#include "polished_andesite_slab_block.h"

PolishedAndesiteSlabBlock::PolishedAndesiteSlabBlock() = default;
PolishedAndesiteSlabBlock::~PolishedAndesiteSlabBlock() = default;

short PolishedAndesiteSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 11736;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 11737;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 11738;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 11739;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 11740;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 11741;
  return 11739;
}

std::shared_ptr<Block> PolishedAndesiteSlabBlock::clone() const {
  std::shared_ptr<PolishedAndesiteSlabBlock> copy = std::make_shared<PolishedAndesiteSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
