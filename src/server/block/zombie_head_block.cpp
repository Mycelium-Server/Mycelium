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


#include "zombie_head_block.h"

ZombieHeadBlock::ZombieHeadBlock() = default;
ZombieHeadBlock::~ZombieHeadBlock() = default;

short ZombieHeadBlock::getId() const {
  if (rotation == ROTATION_0) return 7147;
  if (rotation == ROTATION_1) return 7148;
  if (rotation == ROTATION_2) return 7149;
  if (rotation == ROTATION_3) return 7150;
  if (rotation == ROTATION_4) return 7151;
  if (rotation == ROTATION_5) return 7152;
  if (rotation == ROTATION_6) return 7153;
  if (rotation == ROTATION_7) return 7154;
  if (rotation == ROTATION_8) return 7155;
  if (rotation == ROTATION_9) return 7156;
  if (rotation == ROTATION_10) return 7157;
  if (rotation == ROTATION_11) return 7158;
  if (rotation == ROTATION_12) return 7159;
  if (rotation == ROTATION_13) return 7160;
  if (rotation == ROTATION_14) return 7161;
  if (rotation == ROTATION_15) return 7162;
  return 7147;
}

std::shared_ptr<Block> ZombieHeadBlock::clone() const {
  std::shared_ptr<ZombieHeadBlock> copy = std::make_shared<ZombieHeadBlock>();
  copy->rotation = rotation;
  return copy;
}
