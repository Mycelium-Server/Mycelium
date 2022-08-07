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

class PolishedBlackstoneStairsBlock : public Block {
 public:
  PolishedBlackstoneStairsBlock();
  ~PolishedBlackstoneStairsBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    FACING_NORTH = 0,
    FACING_SOUTH = 1,
    FACING_WEST = 2,
    FACING_EAST = 3,
  } facing = FACING_NORTH;

  enum {
    HALF_TOP = 0,
    HALF_BOTTOM = 1,
  } half = HALF_BOTTOM;

  enum {
    SHAPE_STRAIGHT = 0,
    SHAPE_INNER_LEFT = 1,
    SHAPE_INNER_RIGHT = 2,
    SHAPE_OUTER_LEFT = 3,
    SHAPE_OUTER_RIGHT = 4,
  } shape = SHAPE_STRAIGHT;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
