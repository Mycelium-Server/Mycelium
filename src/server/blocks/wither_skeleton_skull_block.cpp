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

#include "wither_skeleton_skull_block.h"

WitherSkeletonSkullBlock::WitherSkeletonSkullBlock() = default;
WitherSkeletonSkullBlock::~WitherSkeletonSkullBlock() = default;

short WitherSkeletonSkullBlock::getId() const {
  if (rotation == ROTATION_0) return 7127;
  if (rotation == ROTATION_1) return 7128;
  if (rotation == ROTATION_2) return 7129;
  if (rotation == ROTATION_3) return 7130;
  if (rotation == ROTATION_4) return 7131;
  if (rotation == ROTATION_5) return 7132;
  if (rotation == ROTATION_6) return 7133;
  if (rotation == ROTATION_7) return 7134;
  if (rotation == ROTATION_8) return 7135;
  if (rotation == ROTATION_9) return 7136;
  if (rotation == ROTATION_10) return 7137;
  if (rotation == ROTATION_11) return 7138;
  if (rotation == ROTATION_12) return 7139;
  if (rotation == ROTATION_13) return 7140;
  if (rotation == ROTATION_14) return 7141;
  if (rotation == ROTATION_15) return 7142;
  return 7127;
}
