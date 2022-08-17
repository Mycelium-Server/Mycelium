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

class ScaffoldingBlock : public Block {
 public:
  ScaffoldingBlock();
  ~ScaffoldingBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    BOTTOM_TRUE = 0,
    BOTTOM_FALSE = 1,
  } bottom = BOTTOM_FALSE;

  enum {
    DISTANCE_0 = 0,
    DISTANCE_1 = 1,
    DISTANCE_2 = 2,
    DISTANCE_3 = 3,
    DISTANCE_4 = 4,
    DISTANCE_5 = 5,
    DISTANCE_6 = 6,
    DISTANCE_7 = 7,
  } distance = DISTANCE_7;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
