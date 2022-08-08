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


#include "smooth_red_sandstone_slab_block.h"

SmoothRedSandstoneSlabBlock::SmoothRedSandstoneSlabBlock() = default;
SmoothRedSandstoneSlabBlock::~SmoothRedSandstoneSlabBlock() = default;

short SmoothRedSandstoneSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 11676;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 11677;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 11678;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 11679;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 11680;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 11681;
  return 11679;
}

std::shared_ptr<Block> SmoothRedSandstoneSlabBlock::clone() const {
  std::shared_ptr<SmoothRedSandstoneSlabBlock> copy = std::make_shared<SmoothRedSandstoneSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
