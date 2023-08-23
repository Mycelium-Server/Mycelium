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


#include "budding_amethyst_block.h"

BuddingAmethystBlock::BuddingAmethystBlock() = default;
BuddingAmethystBlock::~BuddingAmethystBlock() = default;

short BuddingAmethystBlock::getId() const {
  return 18620;
}

std::shared_ptr<Block> BuddingAmethystBlock::clone() const {
  std::shared_ptr<BuddingAmethystBlock> copy = std::make_shared<BuddingAmethystBlock>();
  return copy;
}
