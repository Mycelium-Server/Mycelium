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


#include "redstone_wire_block.h"

RedstoneWireBlock::RedstoneWireBlock() = default;
RedstoneWireBlock::~RedstoneWireBlock() = default;

short RedstoneWireBlock::getId() const {
  return 2312 + west * 1 + south * 3 + power * 9 + north * 144 + east * 432;
}

std::shared_ptr<Block> RedstoneWireBlock::clone() const {
  std::shared_ptr<RedstoneWireBlock> copy = std::make_shared<RedstoneWireBlock>();
  copy->east = east;
  copy->north = north;
  copy->power = power;
  copy->south = south;
  copy->west = west;
  return copy;
}
