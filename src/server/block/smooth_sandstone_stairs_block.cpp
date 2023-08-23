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


#include "smooth_sandstone_stairs_block.h"

SmoothSandstoneStairsBlock::SmoothSandstoneStairsBlock() = default;
SmoothSandstoneStairsBlock::~SmoothSandstoneStairsBlock() = default;

short SmoothSandstoneStairsBlock::getId() const {
  return 11110 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> SmoothSandstoneStairsBlock::clone() const {
  std::shared_ptr<SmoothSandstoneStairsBlock> copy = std::make_shared<SmoothSandstoneStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
