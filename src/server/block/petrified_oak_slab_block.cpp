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


#include "petrified_oak_slab_block.h"

PetrifiedOakSlabBlock::PetrifiedOakSlabBlock() = default;
PetrifiedOakSlabBlock::~PetrifiedOakSlabBlock() = default;

short PetrifiedOakSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9107;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9108;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9109;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9110;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9111;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9112;
  return 9110;
}

std::shared_ptr<Block> PetrifiedOakSlabBlock::clone() const {
  std::shared_ptr<PetrifiedOakSlabBlock> copy = std::make_shared<PetrifiedOakSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}