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


#include "potted_poppy_block.h"

PottedPoppyBlock::PottedPoppyBlock() = default;
PottedPoppyBlock::~PottedPoppyBlock() = default;

short PottedPoppyBlock::getId() const {
  return 6907;
}

std::shared_ptr<Block> PottedPoppyBlock::clone() const {
  std::shared_ptr<PottedPoppyBlock> copy = std::make_shared<PottedPoppyBlock>();
  return copy;
}
