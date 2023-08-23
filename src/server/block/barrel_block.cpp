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


#include "barrel_block.h"

BarrelBlock::BarrelBlock() = default;
BarrelBlock::~BarrelBlock() = default;

short BarrelBlock::getId() const {
  return 15996 + open * 1 + facing * 2;
}

std::shared_ptr<Block> BarrelBlock::clone() const {
  std::shared_ptr<BarrelBlock> copy = std::make_shared<BarrelBlock>();
  copy->facing = facing;
  copy->open = open;
  return copy;
}
