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


#include "dropper_block.h"

DropperBlock::DropperBlock() = default;
DropperBlock::~DropperBlock() = default;

short DropperBlock::getId() const {
  return 7464 + triggered * 1 + facing * 2;
}

std::shared_ptr<Block> DropperBlock::clone() const {
  std::shared_ptr<DropperBlock> copy = std::make_shared<DropperBlock>();
  copy->facing = facing;
  copy->triggered = triggered;
  return copy;
}
