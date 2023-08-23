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


#include "cut_copper_block.h"

CutCopperBlock::CutCopperBlock() = default;
CutCopperBlock::~CutCopperBlock() = default;

short CutCopperBlock::getId() const {
  return 18917;
}

std::shared_ptr<Block> CutCopperBlock::clone() const {
  std::shared_ptr<CutCopperBlock> copy = std::make_shared<CutCopperBlock>();
  return copy;
}
