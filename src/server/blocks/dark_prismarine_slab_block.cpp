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

#include "dark_prismarine_slab_block.h"

DarkPrismarineSlabBlock::DarkPrismarineSlabBlock() = default;
DarkPrismarineSlabBlock::~DarkPrismarineSlabBlock() = default;

short DarkPrismarineSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 8597;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 8598;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 8599;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 8600;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 8601;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 8602;
  return 8600;
}
