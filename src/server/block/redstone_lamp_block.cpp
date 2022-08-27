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


#include "redstone_lamp_block.h"

RedstoneLampBlock::RedstoneLampBlock() = default;
RedstoneLampBlock::~RedstoneLampBlock() = default;

short RedstoneLampBlock::getId() const {
  if (lit == LIT_TRUE) return 5747;
  if (lit == LIT_FALSE) return 5748;
  return 5748;
}

std::shared_ptr<Block> RedstoneLampBlock::clone() const {
  std::shared_ptr<RedstoneLampBlock> copy = std::make_shared<RedstoneLampBlock>();
  copy->lit = lit;
  return copy;
}