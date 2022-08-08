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


#include "rail_block.h"

RailBlock::RailBlock() = default;
RailBlock::~RailBlock() = default;

short RailBlock::getId() const {
  if (shape == SHAPE_NORTH_SOUTH && waterlogged == WATERLOGGED_TRUE) return 3932;
  if (shape == SHAPE_NORTH_SOUTH && waterlogged == WATERLOGGED_FALSE) return 3933;
  if (shape == SHAPE_EAST_WEST && waterlogged == WATERLOGGED_TRUE) return 3934;
  if (shape == SHAPE_EAST_WEST && waterlogged == WATERLOGGED_FALSE) return 3935;
  if (shape == SHAPE_ASCENDING_EAST && waterlogged == WATERLOGGED_TRUE) return 3936;
  if (shape == SHAPE_ASCENDING_EAST && waterlogged == WATERLOGGED_FALSE) return 3937;
  if (shape == SHAPE_ASCENDING_WEST && waterlogged == WATERLOGGED_TRUE) return 3938;
  if (shape == SHAPE_ASCENDING_WEST && waterlogged == WATERLOGGED_FALSE) return 3939;
  if (shape == SHAPE_ASCENDING_NORTH && waterlogged == WATERLOGGED_TRUE) return 3940;
  if (shape == SHAPE_ASCENDING_NORTH && waterlogged == WATERLOGGED_FALSE) return 3941;
  if (shape == SHAPE_ASCENDING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 3942;
  if (shape == SHAPE_ASCENDING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 3943;
  if (shape == SHAPE_SOUTH_EAST && waterlogged == WATERLOGGED_TRUE) return 3944;
  if (shape == SHAPE_SOUTH_EAST && waterlogged == WATERLOGGED_FALSE) return 3945;
  if (shape == SHAPE_SOUTH_WEST && waterlogged == WATERLOGGED_TRUE) return 3946;
  if (shape == SHAPE_SOUTH_WEST && waterlogged == WATERLOGGED_FALSE) return 3947;
  if (shape == SHAPE_NORTH_WEST && waterlogged == WATERLOGGED_TRUE) return 3948;
  if (shape == SHAPE_NORTH_WEST && waterlogged == WATERLOGGED_FALSE) return 3949;
  if (shape == SHAPE_NORTH_EAST && waterlogged == WATERLOGGED_TRUE) return 3950;
  if (shape == SHAPE_NORTH_EAST && waterlogged == WATERLOGGED_FALSE) return 3951;
  return 3933;
}

std::shared_ptr<Block> RailBlock::clone() const {
  std::shared_ptr<RailBlock> copy = std::make_shared<RailBlock>();
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
