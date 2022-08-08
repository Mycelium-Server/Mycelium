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


#include "pointed_dripstone_block.h"

PointedDripstoneBlock::PointedDripstoneBlock() = default;
PointedDripstoneBlock::~PointedDripstoneBlock() = default;

short PointedDripstoneBlock::getId() const {
  if (thickness == THICKNESS_TIP_MERGE && vertical_direction == VERTICAL_DIRECTION_UP && waterlogged == WATERLOGGED_TRUE) return 19638;
  if (thickness == THICKNESS_TIP_MERGE && vertical_direction == VERTICAL_DIRECTION_UP && waterlogged == WATERLOGGED_FALSE) return 19639;
  if (thickness == THICKNESS_TIP_MERGE && vertical_direction == VERTICAL_DIRECTION_DOWN && waterlogged == WATERLOGGED_TRUE) return 19640;
  if (thickness == THICKNESS_TIP_MERGE && vertical_direction == VERTICAL_DIRECTION_DOWN && waterlogged == WATERLOGGED_FALSE) return 19641;
  if (thickness == THICKNESS_TIP && vertical_direction == VERTICAL_DIRECTION_UP && waterlogged == WATERLOGGED_TRUE) return 19642;
  if (thickness == THICKNESS_TIP && vertical_direction == VERTICAL_DIRECTION_UP && waterlogged == WATERLOGGED_FALSE) return 19643;
  if (thickness == THICKNESS_TIP && vertical_direction == VERTICAL_DIRECTION_DOWN && waterlogged == WATERLOGGED_TRUE) return 19644;
  if (thickness == THICKNESS_TIP && vertical_direction == VERTICAL_DIRECTION_DOWN && waterlogged == WATERLOGGED_FALSE) return 19645;
  if (thickness == THICKNESS_FRUSTUM && vertical_direction == VERTICAL_DIRECTION_UP && waterlogged == WATERLOGGED_TRUE) return 19646;
  if (thickness == THICKNESS_FRUSTUM && vertical_direction == VERTICAL_DIRECTION_UP && waterlogged == WATERLOGGED_FALSE) return 19647;
  if (thickness == THICKNESS_FRUSTUM && vertical_direction == VERTICAL_DIRECTION_DOWN && waterlogged == WATERLOGGED_TRUE) return 19648;
  if (thickness == THICKNESS_FRUSTUM && vertical_direction == VERTICAL_DIRECTION_DOWN && waterlogged == WATERLOGGED_FALSE) return 19649;
  if (thickness == THICKNESS_MIDDLE && vertical_direction == VERTICAL_DIRECTION_UP && waterlogged == WATERLOGGED_TRUE) return 19650;
  if (thickness == THICKNESS_MIDDLE && vertical_direction == VERTICAL_DIRECTION_UP && waterlogged == WATERLOGGED_FALSE) return 19651;
  if (thickness == THICKNESS_MIDDLE && vertical_direction == VERTICAL_DIRECTION_DOWN && waterlogged == WATERLOGGED_TRUE) return 19652;
  if (thickness == THICKNESS_MIDDLE && vertical_direction == VERTICAL_DIRECTION_DOWN && waterlogged == WATERLOGGED_FALSE) return 19653;
  if (thickness == THICKNESS_BASE && vertical_direction == VERTICAL_DIRECTION_UP && waterlogged == WATERLOGGED_TRUE) return 19654;
  if (thickness == THICKNESS_BASE && vertical_direction == VERTICAL_DIRECTION_UP && waterlogged == WATERLOGGED_FALSE) return 19655;
  if (thickness == THICKNESS_BASE && vertical_direction == VERTICAL_DIRECTION_DOWN && waterlogged == WATERLOGGED_TRUE) return 19656;
  if (thickness == THICKNESS_BASE && vertical_direction == VERTICAL_DIRECTION_DOWN && waterlogged == WATERLOGGED_FALSE) return 19657;
  return 19643;
}

std::shared_ptr<Block> PointedDripstoneBlock::clone() const {
  std::shared_ptr<PointedDripstoneBlock> copy = std::make_shared<PointedDripstoneBlock>();
  copy->thickness = thickness;
  copy->vertical_direction = vertical_direction;
  copy->waterlogged = waterlogged;
  return copy;
}
