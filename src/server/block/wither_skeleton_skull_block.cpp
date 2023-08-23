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


#include "wither_skeleton_skull_block.h"

WitherSkeletonSkullBlock::WitherSkeletonSkullBlock() = default;
WitherSkeletonSkullBlock::~WitherSkeletonSkullBlock() = default;

short WitherSkeletonSkullBlock::getId() const {
  return 7127 + rotation * 1;
}

std::shared_ptr<Block> WitherSkeletonSkullBlock::clone() const {
  std::shared_ptr<WitherSkeletonSkullBlock> copy = std::make_shared<WitherSkeletonSkullBlock>();
  copy->rotation = rotation;
  return copy;
}
