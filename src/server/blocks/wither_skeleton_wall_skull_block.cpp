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

#include "wither_skeleton_wall_skull_block.h"

WitherSkeletonWallSkullBlock::WitherSkeletonWallSkullBlock() = default;
WitherSkeletonWallSkullBlock::~WitherSkeletonWallSkullBlock() = default;

short WitherSkeletonWallSkullBlock::getId() const {
  if (facing == FACING_NORTH) return 7143;
  if (facing == FACING_SOUTH) return 7144;
  if (facing == FACING_WEST) return 7145;
  if (facing == FACING_EAST) return 7146;
  return 7143;
}
