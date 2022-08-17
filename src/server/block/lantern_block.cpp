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


#include "lantern_block.h"

LanternBlock::LanternBlock() = default;
LanternBlock::~LanternBlock() = default;

short LanternBlock::getId() const {
  if (hanging == HANGING_TRUE && waterlogged == WATERLOGGED_TRUE) return 16091;
  if (hanging == HANGING_TRUE && waterlogged == WATERLOGGED_FALSE) return 16092;
  if (hanging == HANGING_FALSE && waterlogged == WATERLOGGED_TRUE) return 16093;
  if (hanging == HANGING_FALSE && waterlogged == WATERLOGGED_FALSE) return 16094;
  return 16094;
}

std::shared_ptr<Block> LanternBlock::clone() const {
  std::shared_ptr<LanternBlock> copy = std::make_shared<LanternBlock>();
  copy->hanging = hanging;
  copy->waterlogged = waterlogged;
  return copy;
}
