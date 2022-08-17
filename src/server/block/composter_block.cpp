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


#include "composter_block.h"

ComposterBlock::ComposterBlock() = default;
ComposterBlock::~ComposterBlock() = default;

short ComposterBlock::getId() const {
  if (level == LEVEL_0) return 16960;
  if (level == LEVEL_1) return 16961;
  if (level == LEVEL_2) return 16962;
  if (level == LEVEL_3) return 16963;
  if (level == LEVEL_4) return 16964;
  if (level == LEVEL_5) return 16965;
  if (level == LEVEL_6) return 16966;
  if (level == LEVEL_7) return 16967;
  if (level == LEVEL_8) return 16968;
  return 16960;
}

std::shared_ptr<Block> ComposterBlock::clone() const {
  std::shared_ptr<ComposterBlock> copy = std::make_shared<ComposterBlock>();
  copy->level = level;
  return copy;
}
