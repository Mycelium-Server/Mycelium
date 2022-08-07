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

class LightBlock : public Block {
 public:
  LightBlock();
  ~LightBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    LEVEL_0 = 0,
    LEVEL_1 = 1,
    LEVEL_2 = 2,
    LEVEL_3 = 3,
    LEVEL_4 = 4,
    LEVEL_5 = 5,
    LEVEL_6 = 6,
    LEVEL_7 = 7,
    LEVEL_8 = 8,
    LEVEL_9 = 9,
    LEVEL_10 = 10,
    LEVEL_11 = 11,
    LEVEL_12 = 12,
    LEVEL_13 = 13,
    LEVEL_14 = 14,
    LEVEL_15 = 15,
  } level = LEVEL_15;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
