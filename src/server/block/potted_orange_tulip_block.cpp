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


#include "potted_orange_tulip_block.h"

PottedOrangeTulipBlock::PottedOrangeTulipBlock() = default;
PottedOrangeTulipBlock::~PottedOrangeTulipBlock() = default;

short PottedOrangeTulipBlock::getId() const {
  return 6912;
}

std::shared_ptr<Block> PottedOrangeTulipBlock::clone() const {
  std::shared_ptr<PottedOrangeTulipBlock> copy = std::make_shared<PottedOrangeTulipBlock>();
  return copy;
}
