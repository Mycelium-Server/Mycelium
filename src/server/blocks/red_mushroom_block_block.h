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

class RedMushroomBlockBlock : public Block {
 public:
  RedMushroomBlockBlock();
  ~RedMushroomBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    DOWN_TRUE = 0,
    DOWN_FALSE = 1,
  } down = DOWN_TRUE;

  enum {
    EAST_TRUE = 0,
    EAST_FALSE = 1,
  } east = EAST_TRUE;

  enum {
    NORTH_TRUE = 0,
    NORTH_FALSE = 1,
  } north = NORTH_TRUE;

  enum {
    SOUTH_TRUE = 0,
    SOUTH_FALSE = 1,
  } south = SOUTH_TRUE;

  enum {
    UP_TRUE = 0,
    UP_FALSE = 1,
  } up = UP_TRUE;

  enum {
    WEST_TRUE = 0,
    WEST_FALSE = 1,
  } west = WEST_TRUE;

};
