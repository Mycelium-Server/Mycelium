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


#include "lime_glazed_terracotta_block.h"

LimeGlazedTerracottaBlock::LimeGlazedTerracottaBlock() = default;
LimeGlazedTerracottaBlock::~LimeGlazedTerracottaBlock() = default;

short LimeGlazedTerracottaBlock::getId() const {
  if (facing == FACING_NORTH) return 10275;
  if (facing == FACING_SOUTH) return 10276;
  if (facing == FACING_WEST) return 10277;
  if (facing == FACING_EAST) return 10278;
  return 10275;
}

std::shared_ptr<Block> LimeGlazedTerracottaBlock::clone() const {
  std::shared_ptr<LimeGlazedTerracottaBlock> copy = std::make_shared<LimeGlazedTerracottaBlock>();
  copy->facing = facing;
  return copy;
}
