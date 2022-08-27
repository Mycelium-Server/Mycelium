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

class KelpBlock : public Block {
 public:
  KelpBlock();
  ~KelpBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    AGE_0 = 0,
    AGE_1 = 1,
    AGE_2 = 2,
    AGE_3 = 3,
    AGE_4 = 4,
    AGE_5 = 5,
    AGE_6 = 6,
    AGE_7 = 7,
    AGE_8 = 8,
    AGE_9 = 9,
    AGE_10 = 10,
    AGE_11 = 11,
    AGE_12 = 12,
    AGE_13 = 13,
    AGE_14 = 14,
    AGE_15 = 15,
    AGE_16 = 16,
    AGE_17 = 17,
    AGE_18 = 18,
    AGE_19 = 19,
    AGE_20 = 20,
    AGE_21 = 21,
    AGE_22 = 22,
    AGE_23 = 23,
    AGE_24 = 24,
    AGE_25 = 25,
  } age = AGE_0;

};