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

#pragma once

#include "block.h"

class RailBlock : public Block {
 public:
  RailBlock();
  ~RailBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    SHAPE_NORTH_SOUTH = 0,
    SHAPE_EAST_WEST = 1,
    SHAPE_ASCENDING_EAST = 2,
    SHAPE_ASCENDING_WEST = 3,
    SHAPE_ASCENDING_NORTH = 4,
    SHAPE_ASCENDING_SOUTH = 5,
    SHAPE_SOUTH_EAST = 6,
    SHAPE_SOUTH_WEST = 7,
    SHAPE_NORTH_WEST = 8,
    SHAPE_NORTH_EAST = 9,
  } shape = SHAPE_NORTH_SOUTH;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
