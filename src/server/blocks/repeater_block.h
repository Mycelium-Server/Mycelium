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

class RepeaterBlock : public Block {
 public:
  RepeaterBlock();
  ~RepeaterBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    DELAY_1 = 0,
    DELAY_2 = 1,
    DELAY_3 = 2,
    DELAY_4 = 3,
  } delay = DELAY_1;

  enum {
    FACING_NORTH = 0,
    FACING_SOUTH = 1,
    FACING_WEST = 2,
    FACING_EAST = 3,
  } facing = FACING_NORTH;

  enum {
    LOCKED_TRUE = 0,
    LOCKED_FALSE = 1,
  } locked = LOCKED_FALSE;

  enum {
    POWERED_TRUE = 0,
    POWERED_FALSE = 1,
  } powered = POWERED_FALSE;

};
