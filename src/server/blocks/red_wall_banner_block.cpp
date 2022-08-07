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

#include "red_wall_banner_block.h"

RedWallBannerBlock::RedWallBannerBlock() = default;
RedWallBannerBlock::~RedWallBannerBlock() = default;

short RedWallBannerBlock::getId() const {
  if (facing == FACING_NORTH) return 8950;
  if (facing == FACING_SOUTH) return 8951;
  if (facing == FACING_WEST) return 8952;
  if (facing == FACING_EAST) return 8953;
  return 8950;
}
