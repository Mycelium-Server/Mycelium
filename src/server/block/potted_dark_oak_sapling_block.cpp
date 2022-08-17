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


#include "potted_dark_oak_sapling_block.h"

PottedDarkOakSaplingBlock::PottedDarkOakSaplingBlock() = default;
PottedDarkOakSaplingBlock::~PottedDarkOakSaplingBlock() = default;

short PottedDarkOakSaplingBlock::getId() const {
  return 6903;
}

std::shared_ptr<Block> PottedDarkOakSaplingBlock::clone() const {
  std::shared_ptr<PottedDarkOakSaplingBlock> copy = std::make_shared<PottedDarkOakSaplingBlock>();
  return copy;
}
