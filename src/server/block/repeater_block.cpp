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


#include "repeater_block.h"

RepeaterBlock::RepeaterBlock() = default;
RepeaterBlock::~RepeaterBlock() = default;

short RepeaterBlock::getId() const {
  return 4340 + powered * 1 + locked * 2 + facing * 4 + delay * 16;
}

std::shared_ptr<Block> RepeaterBlock::clone() const {
  std::shared_ptr<RepeaterBlock> copy = std::make_shared<RepeaterBlock>();
  copy->delay = delay;
  copy->facing = facing;
  copy->locked = locked;
  copy->powered = powered;
  return copy;
}
