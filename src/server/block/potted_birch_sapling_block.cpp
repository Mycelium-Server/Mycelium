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


#include "potted_birch_sapling_block.h"

PottedBirchSaplingBlock::PottedBirchSaplingBlock() = default;
PottedBirchSaplingBlock::~PottedBirchSaplingBlock() = default;

short PottedBirchSaplingBlock::getId() const {
  return 6900;
}

std::shared_ptr<Block> PottedBirchSaplingBlock::clone() const {
  std::shared_ptr<PottedBirchSaplingBlock> copy = std::make_shared<PottedBirchSaplingBlock>();
  return copy;
}
