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

class LightGrayBannerBlock : public Block {
 public:
  LightGrayBannerBlock();
  ~LightGrayBannerBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    ROTATION_0 = 0,
    ROTATION_1 = 1,
    ROTATION_2 = 2,
    ROTATION_3 = 3,
    ROTATION_4 = 4,
    ROTATION_5 = 5,
    ROTATION_6 = 6,
    ROTATION_7 = 7,
    ROTATION_8 = 8,
    ROTATION_9 = 9,
    ROTATION_10 = 10,
    ROTATION_11 = 11,
    ROTATION_12 = 12,
    ROTATION_13 = 13,
    ROTATION_14 = 14,
    ROTATION_15 = 15,
  } rotation = ROTATION_0;

};
