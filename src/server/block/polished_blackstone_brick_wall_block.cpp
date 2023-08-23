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


#include "polished_blackstone_brick_wall_block.h"

PolishedBlackstoneBrickWallBlock::PolishedBlackstoneBrickWallBlock() = default;
PolishedBlackstoneBrickWallBlock::~PolishedBlackstoneBrickWallBlock() = default;

short PolishedBlackstoneBrickWallBlock::getId() const {
  return 17549 + west * 1 + waterlogged * 3 + up * 6 + south * 12 + north * 36 + east * 108;
}

std::shared_ptr<Block> PolishedBlackstoneBrickWallBlock::clone() const {
  std::shared_ptr<PolishedBlackstoneBrickWallBlock> copy = std::make_shared<PolishedBlackstoneBrickWallBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
