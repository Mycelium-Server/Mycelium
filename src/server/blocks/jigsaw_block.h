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

class JigsawBlock : public Block {
 public:
  JigsawBlock();
  ~JigsawBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    ORIENTATION_DOWN_EAST = 0,
    ORIENTATION_DOWN_NORTH = 1,
    ORIENTATION_DOWN_SOUTH = 2,
    ORIENTATION_DOWN_WEST = 3,
    ORIENTATION_UP_EAST = 4,
    ORIENTATION_UP_NORTH = 5,
    ORIENTATION_UP_SOUTH = 6,
    ORIENTATION_UP_WEST = 7,
    ORIENTATION_WEST_UP = 8,
    ORIENTATION_EAST_UP = 9,
    ORIENTATION_NORTH_UP = 10,
    ORIENTATION_SOUTH_UP = 11,
  } orientation = ORIENTATION_NORTH_UP;

};
