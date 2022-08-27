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


#include "anvil_block.h"

AnvilBlock::AnvilBlock() = default;
AnvilBlock::~AnvilBlock() = default;

short AnvilBlock::getId() const {
  if (facing == FACING_NORTH) return 7227;
  if (facing == FACING_SOUTH) return 7228;
  if (facing == FACING_WEST) return 7229;
  if (facing == FACING_EAST) return 7230;
  return 7227;
}

std::shared_ptr<Block> AnvilBlock::clone() const {
  std::shared_ptr<AnvilBlock> copy = std::make_shared<AnvilBlock>();
  copy->facing = facing;
  return copy;
}