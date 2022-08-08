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


#include "black_wall_banner_block.h"

BlackWallBannerBlock::BlackWallBannerBlock() = default;
BlackWallBannerBlock::~BlackWallBannerBlock() = default;

short BlackWallBannerBlock::getId() const {
  if (facing == FACING_NORTH) return 8954;
  if (facing == FACING_SOUTH) return 8955;
  if (facing == FACING_WEST) return 8956;
  if (facing == FACING_EAST) return 8957;
  return 8954;
}

std::shared_ptr<Block> BlackWallBannerBlock::clone() const {
  std::shared_ptr<BlackWallBannerBlock> copy = std::make_shared<BlackWallBannerBlock>();
  copy->facing = facing;
  return copy;
}
