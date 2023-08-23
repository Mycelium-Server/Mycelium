/*
 * Mycelium
 * Copyright (C) 2022 - 2023  JNNGL
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


#include "sculk_vein_block.h"

SculkVeinBlock::SculkVeinBlock() = default;
SculkVeinBlock::~SculkVeinBlock() = default;

short SculkVeinBlock::getId() const {
  return 18770 + west * 1 + waterlogged * 2 + up * 4 + south * 8 + north * 16 + east * 32 + down * 64;
}

std::shared_ptr<Block> SculkVeinBlock::clone() const {
  std::shared_ptr<SculkVeinBlock> copy = std::make_shared<SculkVeinBlock>();
  copy->down = down;
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
