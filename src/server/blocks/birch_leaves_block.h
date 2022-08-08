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

class BirchLeavesBlock : public Block {
 public:
  BirchLeavesBlock();
  ~BirchLeavesBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    DISTANCE_1 = 0,
    DISTANCE_2 = 1,
    DISTANCE_3 = 2,
    DISTANCE_4 = 3,
    DISTANCE_5 = 4,
    DISTANCE_6 = 5,
    DISTANCE_7 = 6,
  } distance = DISTANCE_7;

  enum {
    PERSISTENT_TRUE = 0,
    PERSISTENT_FALSE = 1,
  } persistent = PERSISTENT_FALSE;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
