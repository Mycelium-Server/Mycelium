/*
 * Mycelium
 * Copyright (C) 2022 - 2023  JNNGL
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

class HopperBlock : public Block {
 public:
  HopperBlock();
  ~HopperBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    ENABLED_TRUE = 0,
    ENABLED_FALSE = 1,
  } enabled = ENABLED_TRUE;

  enum {
    FACING_DOWN = 0,
    FACING_NORTH = 1,
    FACING_SOUTH = 2,
    FACING_WEST = 3,
    FACING_EAST = 4,
  } facing = FACING_DOWN;

};
