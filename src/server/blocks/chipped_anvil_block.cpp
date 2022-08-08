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


#include "chipped_anvil_block.h"

ChippedAnvilBlock::ChippedAnvilBlock() = default;
ChippedAnvilBlock::~ChippedAnvilBlock() = default;

short ChippedAnvilBlock::getId() const {
  if (facing == FACING_NORTH) return 7231;
  if (facing == FACING_SOUTH) return 7232;
  if (facing == FACING_WEST) return 7233;
  if (facing == FACING_EAST) return 7234;
  return 7231;
}

std::shared_ptr<Block> ChippedAnvilBlock::clone() const {
  std::shared_ptr<ChippedAnvilBlock> copy = std::make_shared<ChippedAnvilBlock>();
  copy->facing = facing;
  return copy;
}
