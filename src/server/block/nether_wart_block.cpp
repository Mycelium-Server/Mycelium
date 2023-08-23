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


#include "nether_wart_block.h"

NetherWartBlock::NetherWartBlock() = default;
NetherWartBlock::~NetherWartBlock() = default;

short NetherWartBlock::getId() const {
  return 5715 + age * 1;
}

std::shared_ptr<Block> NetherWartBlock::clone() const {
  std::shared_ptr<NetherWartBlock> copy = std::make_shared<NetherWartBlock>();
  copy->age = age;
  return copy;
}
