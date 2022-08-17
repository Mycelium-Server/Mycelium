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


#include "light_gray_glazed_terracotta_block.h"

LightGrayGlazedTerracottaBlock::LightGrayGlazedTerracottaBlock() = default;
LightGrayGlazedTerracottaBlock::~LightGrayGlazedTerracottaBlock() = default;

short LightGrayGlazedTerracottaBlock::getId() const {
  if (facing == FACING_NORTH) return 10287;
  if (facing == FACING_SOUTH) return 10288;
  if (facing == FACING_WEST) return 10289;
  if (facing == FACING_EAST) return 10290;
  return 10287;
}

std::shared_ptr<Block> LightGrayGlazedTerracottaBlock::clone() const {
  std::shared_ptr<LightGrayGlazedTerracottaBlock> copy = std::make_shared<LightGrayGlazedTerracottaBlock>();
  copy->facing = facing;
  return copy;
}
