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


#include "small_dripleaf_block.h"

SmallDripleafBlock::SmallDripleafBlock() = default;
SmallDripleafBlock::~SmallDripleafBlock() = default;

short SmallDripleafBlock::getId() const {
  return 19758 + waterlogged * 1 + half * 2 + facing * 4;
}

std::shared_ptr<Block> SmallDripleafBlock::clone() const {
  std::shared_ptr<SmallDripleafBlock> copy = std::make_shared<SmallDripleafBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->waterlogged = waterlogged;
  return copy;
}
