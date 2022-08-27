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


#include "birch_sapling_block.h"

BirchSaplingBlock::BirchSaplingBlock() = default;
BirchSaplingBlock::~BirchSaplingBlock() = default;

short BirchSaplingBlock::getId() const {
  if (stage == STAGE_0) return 26;
  if (stage == STAGE_1) return 27;
  return 26;
}

std::shared_ptr<Block> BirchSaplingBlock::clone() const {
  std::shared_ptr<BirchSaplingBlock> copy = std::make_shared<BirchSaplingBlock>();
  copy->stage = stage;
  return copy;
}