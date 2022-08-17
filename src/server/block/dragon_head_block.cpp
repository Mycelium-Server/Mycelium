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


#include "dragon_head_block.h"

DragonHeadBlock::DragonHeadBlock() = default;
DragonHeadBlock::~DragonHeadBlock() = default;

short DragonHeadBlock::getId() const {
  if (rotation == ROTATION_0) return 7207;
  if (rotation == ROTATION_1) return 7208;
  if (rotation == ROTATION_2) return 7209;
  if (rotation == ROTATION_3) return 7210;
  if (rotation == ROTATION_4) return 7211;
  if (rotation == ROTATION_5) return 7212;
  if (rotation == ROTATION_6) return 7213;
  if (rotation == ROTATION_7) return 7214;
  if (rotation == ROTATION_8) return 7215;
  if (rotation == ROTATION_9) return 7216;
  if (rotation == ROTATION_10) return 7217;
  if (rotation == ROTATION_11) return 7218;
  if (rotation == ROTATION_12) return 7219;
  if (rotation == ROTATION_13) return 7220;
  if (rotation == ROTATION_14) return 7221;
  if (rotation == ROTATION_15) return 7222;
  return 7207;
}

std::shared_ptr<Block> DragonHeadBlock::clone() const {
  std::shared_ptr<DragonHeadBlock> copy = std::make_shared<DragonHeadBlock>();
  copy->rotation = rotation;
  return copy;
}
