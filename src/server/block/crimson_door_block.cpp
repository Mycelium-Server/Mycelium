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


#include "crimson_door_block.h"

CrimsonDoorBlock::CrimsonDoorBlock() = default;
CrimsonDoorBlock::~CrimsonDoorBlock() = default;

short CrimsonDoorBlock::getId() const {
  return 16736 + powered * 1 + open * 2 + hinge * 4 + half * 8 + facing * 16;
}

std::shared_ptr<Block> CrimsonDoorBlock::clone() const {
  std::shared_ptr<CrimsonDoorBlock> copy = std::make_shared<CrimsonDoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->hinge = hinge;
  copy->open = open;
  copy->powered = powered;
  return copy;
}
