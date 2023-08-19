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


#include "chain_command_block_block.h"

ChainCommandBlockBlock::ChainCommandBlockBlock() = default;
ChainCommandBlockBlock::~ChainCommandBlockBlock() = default;

short ChainCommandBlockBlock::getId() const {
  return 10118 + facing * 1 + conditional * 6;
}

std::shared_ptr<Block> ChainCommandBlockBlock::clone() const {
  std::shared_ptr<ChainCommandBlockBlock> copy = std::make_shared<ChainCommandBlockBlock>();
  copy->conditional = conditional;
  copy->facing = facing;
  return copy;
}
