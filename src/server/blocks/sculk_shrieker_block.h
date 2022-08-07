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

class SculkShriekerBlock : public Block {
 public:
  SculkShriekerBlock();
  ~SculkShriekerBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    CAN_SUMMON_TRUE = 0,
    CAN_SUMMON_FALSE = 1,
  } can_summon = CAN_SUMMON_FALSE;

  enum {
    SHRIEKING_TRUE = 0,
    SHRIEKING_FALSE = 1,
  } shrieking = SHRIEKING_FALSE;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
