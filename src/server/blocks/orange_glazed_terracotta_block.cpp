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


#include "orange_glazed_terracotta_block.h"

OrangeGlazedTerracottaBlock::OrangeGlazedTerracottaBlock() = default;
OrangeGlazedTerracottaBlock::~OrangeGlazedTerracottaBlock() = default;

short OrangeGlazedTerracottaBlock::getId() const {
  if (facing == FACING_NORTH) return 10259;
  if (facing == FACING_SOUTH) return 10260;
  if (facing == FACING_WEST) return 10261;
  if (facing == FACING_EAST) return 10262;
  return 10259;
}

std::shared_ptr<Block> OrangeGlazedTerracottaBlock::clone() const {
  std::shared_ptr<OrangeGlazedTerracottaBlock> copy = std::make_shared<OrangeGlazedTerracottaBlock>();
  copy->facing = facing;
  return copy;
}
