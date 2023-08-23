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


#include "jungle_fence_gate_block.h"

JungleFenceGateBlock::JungleFenceGateBlock() = default;
JungleFenceGateBlock::~JungleFenceGateBlock() = default;

short JungleFenceGateBlock::getId() const {
  return 9235 + powered * 1 + open * 2 + in_wall * 4 + facing * 8;
}

std::shared_ptr<Block> JungleFenceGateBlock::clone() const {
  std::shared_ptr<JungleFenceGateBlock> copy = std::make_shared<JungleFenceGateBlock>();
  copy->facing = facing;
  copy->in_wall = in_wall;
  copy->open = open;
  copy->powered = powered;
  return copy;
}
