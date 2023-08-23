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


#include "dark_prismarine_slab_block.h"

DarkPrismarineSlabBlock::DarkPrismarineSlabBlock() = default;
DarkPrismarineSlabBlock::~DarkPrismarineSlabBlock() = default;

short DarkPrismarineSlabBlock::getId() const {
  return 8597 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> DarkPrismarineSlabBlock::clone() const {
  std::shared_ptr<DarkPrismarineSlabBlock> copy = std::make_shared<DarkPrismarineSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
