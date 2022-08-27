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


#include "end_rod_block.h"

EndRodBlock::EndRodBlock() = default;
EndRodBlock::~EndRodBlock() = default;

short EndRodBlock::getId() const {
  if (facing == FACING_NORTH) return 9939;
  if (facing == FACING_EAST) return 9940;
  if (facing == FACING_SOUTH) return 9941;
  if (facing == FACING_WEST) return 9942;
  if (facing == FACING_UP) return 9943;
  if (facing == FACING_DOWN) return 9944;
  return 9943;
}

std::shared_ptr<Block> EndRodBlock::clone() const {
  std::shared_ptr<EndRodBlock> copy = std::make_shared<EndRodBlock>();
  copy->facing = facing;
  return copy;
}