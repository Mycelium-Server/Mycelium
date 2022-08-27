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


#include "bone_block_block.h"

BoneBlockBlock::BoneBlockBlock() = default;
BoneBlockBlock::~BoneBlockBlock() = default;

short BoneBlockBlock::getId() const {
  if (axis == AXIS_X) return 10137;
  if (axis == AXIS_Y) return 10138;
  if (axis == AXIS_Z) return 10139;
  return 10138;
}

std::shared_ptr<Block> BoneBlockBlock::clone() const {
  std::shared_ptr<BoneBlockBlock> copy = std::make_shared<BoneBlockBlock>();
  copy->axis = axis;
  return copy;
}