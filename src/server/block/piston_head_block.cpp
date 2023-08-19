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


#include "piston_head_block.h"

PistonHeadBlock::PistonHeadBlock() = default;
PistonHeadBlock::~PistonHeadBlock() = default;

short PistonHeadBlock::getId() const {
  return 1614 + type * 1 + isShort * 2 + facing * 4;
}

std::shared_ptr<Block> PistonHeadBlock::clone() const {
  std::shared_ptr<PistonHeadBlock> copy = std::make_shared<PistonHeadBlock>();
  copy->type = type;
  copy->facing = facing;
  copy->isShort = isShort;
  return copy;
}
