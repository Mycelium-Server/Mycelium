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

#include "skeleton_skull_block.h"

SkeletonSkullBlock::SkeletonSkullBlock() = default;
SkeletonSkullBlock::~SkeletonSkullBlock() = default;

short SkeletonSkullBlock::getId() const {
  if (rotation == ROTATION_0) return 7107;
  if (rotation == ROTATION_1) return 7108;
  if (rotation == ROTATION_2) return 7109;
  if (rotation == ROTATION_3) return 7110;
  if (rotation == ROTATION_4) return 7111;
  if (rotation == ROTATION_5) return 7112;
  if (rotation == ROTATION_6) return 7113;
  if (rotation == ROTATION_7) return 7114;
  if (rotation == ROTATION_8) return 7115;
  if (rotation == ROTATION_9) return 7116;
  if (rotation == ROTATION_10) return 7117;
  if (rotation == ROTATION_11) return 7118;
  if (rotation == ROTATION_12) return 7119;
  if (rotation == ROTATION_13) return 7120;
  if (rotation == ROTATION_14) return 7121;
  if (rotation == ROTATION_15) return 7122;
  return 7107;
}
