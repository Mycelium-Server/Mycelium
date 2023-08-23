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

class BrewingStandBlock : public Block {
 public:
  BrewingStandBlock();
  ~BrewingStandBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    HAS_BOTTLE_0_TRUE = 0,
    HAS_BOTTLE_0_FALSE = 1,
  } has_bottle_0 = HAS_BOTTLE_0_FALSE;

  enum {
    HAS_BOTTLE_1_TRUE = 0,
    HAS_BOTTLE_1_FALSE = 1,
  } has_bottle_1 = HAS_BOTTLE_1_FALSE;

  enum {
    HAS_BOTTLE_2_TRUE = 0,
    HAS_BOTTLE_2_FALSE = 1,
  } has_bottle_2 = HAS_BOTTLE_2_FALSE;

};
