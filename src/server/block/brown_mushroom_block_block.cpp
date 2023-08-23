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


#include "brown_mushroom_block_block.h"

BrownMushroomBlockBlock::BrownMushroomBlockBlock() = default;
BrownMushroomBlockBlock::~BrownMushroomBlockBlock() = default;

short BrownMushroomBlockBlock::getId() const {
  return 4880 + west * 1 + up * 2 + south * 4 + north * 8 + east * 16 + down * 32;
}

std::shared_ptr<Block> BrownMushroomBlockBlock::clone() const {
  std::shared_ptr<BrownMushroomBlockBlock> copy = std::make_shared<BrownMushroomBlockBlock>();
  copy->down = down;
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->west = west;
  return copy;
}
