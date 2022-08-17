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


#include "smoker_block.h"

SmokerBlock::SmokerBlock() = default;
SmokerBlock::~SmokerBlock() = default;

short SmokerBlock::getId() const {
  if (facing == FACING_NORTH && lit == LIT_TRUE) return 16008;
  if (facing == FACING_NORTH && lit == LIT_FALSE) return 16009;
  if (facing == FACING_SOUTH && lit == LIT_TRUE) return 16010;
  if (facing == FACING_SOUTH && lit == LIT_FALSE) return 16011;
  if (facing == FACING_WEST && lit == LIT_TRUE) return 16012;
  if (facing == FACING_WEST && lit == LIT_FALSE) return 16013;
  if (facing == FACING_EAST && lit == LIT_TRUE) return 16014;
  if (facing == FACING_EAST && lit == LIT_FALSE) return 16015;
  return 16009;
}

std::shared_ptr<Block> SmokerBlock::clone() const {
  std::shared_ptr<SmokerBlock> copy = std::make_shared<SmokerBlock>();
  copy->facing = facing;
  copy->lit = lit;
  return copy;
}
