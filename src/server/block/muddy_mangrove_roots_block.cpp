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


#include "muddy_mangrove_roots_block.h"

MuddyMangroveRootsBlock::MuddyMangroveRootsBlock() = default;
MuddyMangroveRootsBlock::~MuddyMangroveRootsBlock() = default;

short MuddyMangroveRootsBlock::getId() const {
  if (axis == AXIS_X) return 140;
  if (axis == AXIS_Y) return 141;
  if (axis == AXIS_Z) return 142;
  return 141;
}

std::shared_ptr<Block> MuddyMangroveRootsBlock::clone() const {
  std::shared_ptr<MuddyMangroveRootsBlock> copy = std::make_shared<MuddyMangroveRootsBlock>();
  copy->axis = axis;
  return copy;
}
