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

#include "cut_red_sandstone_slab_block.h"

CutRedSandstoneSlabBlock::CutRedSandstoneSlabBlock() = default;
CutRedSandstoneSlabBlock::~CutRedSandstoneSlabBlock() = default;

short CutRedSandstoneSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9155;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9156;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9157;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9158;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9159;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9160;
  return 9158;
}
