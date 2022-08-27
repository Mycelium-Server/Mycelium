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

class JungleDoorBlock : public Block {
 public:
  JungleDoorBlock();
  ~JungleDoorBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    FACING_NORTH = 0,
    FACING_SOUTH = 1,
    FACING_WEST = 2,
    FACING_EAST = 3,
  } facing = FACING_NORTH;

  enum {
    HALF_UPPER = 0,
    HALF_LOWER = 1,
  } half = HALF_LOWER;

  enum {
    HINGE_LEFT = 0,
    HINGE_RIGHT = 1,
  } hinge = HINGE_LEFT;

  enum {
    OPEN_TRUE = 0,
    OPEN_FALSE = 1,
  } open = OPEN_FALSE;

  enum {
    POWERED_TRUE = 0,
    POWERED_FALSE = 1,
  } powered = POWERED_FALSE;

};