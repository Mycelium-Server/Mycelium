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


#include "acacia_slab_block.h"

AcaciaSlabBlock::AcaciaSlabBlock() = default;
AcaciaSlabBlock::~AcaciaSlabBlock() = default;

short AcaciaSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9065;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9066;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9067;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9068;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9069;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9070;
  return 9068;
}

std::shared_ptr<Block> AcaciaSlabBlock::clone() const {
  std::shared_ptr<AcaciaSlabBlock> copy = std::make_shared<AcaciaSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}