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


#include "yellow_stained_glass_pane_block.h"

YellowStainedGlassPaneBlock::YellowStainedGlassPaneBlock() = default;
YellowStainedGlassPaneBlock::~YellowStainedGlassPaneBlock() = default;

short YellowStainedGlassPaneBlock::getId() const {
  return 7620 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> YellowStainedGlassPaneBlock::clone() const {
  std::shared_ptr<YellowStainedGlassPaneBlock> copy = std::make_shared<YellowStainedGlassPaneBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
