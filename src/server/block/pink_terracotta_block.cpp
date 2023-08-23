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


#include "pink_terracotta_block.h"

PinkTerracottaBlock::PinkTerracottaBlock() = default;
PinkTerracottaBlock::~PinkTerracottaBlock() = default;

short PinkTerracottaBlock::getId() const {
  return 7482;
}

std::shared_ptr<Block> PinkTerracottaBlock::clone() const {
  std::shared_ptr<PinkTerracottaBlock> copy = std::make_shared<PinkTerracottaBlock>();
  return copy;
}
