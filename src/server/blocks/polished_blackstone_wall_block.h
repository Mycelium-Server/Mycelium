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

class PolishedBlackstoneWallBlock : public Block {
 public:
  PolishedBlackstoneWallBlock();
  ~PolishedBlackstoneWallBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    EAST_NONE = 0,
    EAST_LOW = 1,
    EAST_TALL = 2,
  } east = EAST_NONE;

  enum {
    NORTH_NONE = 0,
    NORTH_LOW = 1,
    NORTH_TALL = 2,
  } north = NORTH_NONE;

  enum {
    SOUTH_NONE = 0,
    SOUTH_LOW = 1,
    SOUTH_TALL = 2,
  } south = SOUTH_NONE;

  enum {
    UP_TRUE = 0,
    UP_FALSE = 1,
  } up = UP_TRUE;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

  enum {
    WEST_NONE = 0,
    WEST_LOW = 1,
    WEST_TALL = 2,
  } west = WEST_NONE;

};
