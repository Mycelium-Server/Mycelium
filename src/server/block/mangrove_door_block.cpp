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


#include "mangrove_door_block.h"

MangroveDoorBlock::MangroveDoorBlock() = default;
MangroveDoorBlock::~MangroveDoorBlock() = default;

short MangroveDoorBlock::getId() const {
  return 9875 + powered * 1 + open * 2 + hinge * 4 + half * 8 + facing * 16;
}

std::shared_ptr<Block> MangroveDoorBlock::clone() const {
  std::shared_ptr<MangroveDoorBlock> copy = std::make_shared<MangroveDoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->hinge = hinge;
  copy->open = open;
  copy->powered = powered;
  return copy;
}
