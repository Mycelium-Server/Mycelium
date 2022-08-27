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


#include "water_cauldron_block.h"

WaterCauldronBlock::WaterCauldronBlock() = default;
WaterCauldronBlock::~WaterCauldronBlock() = default;

short WaterCauldronBlock::getId() const {
  if (level == LEVEL_1) return 5729;
  if (level == LEVEL_2) return 5730;
  if (level == LEVEL_3) return 5731;
  return 5729;
}

std::shared_ptr<Block> WaterCauldronBlock::clone() const {
  std::shared_ptr<WaterCauldronBlock> copy = std::make_shared<WaterCauldronBlock>();
  copy->level = level;
  return copy;
}