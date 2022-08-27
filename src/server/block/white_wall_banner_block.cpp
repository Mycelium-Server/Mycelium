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


#include "white_wall_banner_block.h"

WhiteWallBannerBlock::WhiteWallBannerBlock() = default;
WhiteWallBannerBlock::~WhiteWallBannerBlock() = default;

short WhiteWallBannerBlock::getId() const {
  if (facing == FACING_NORTH) return 8894;
  if (facing == FACING_SOUTH) return 8895;
  if (facing == FACING_WEST) return 8896;
  if (facing == FACING_EAST) return 8897;
  return 8894;
}

std::shared_ptr<Block> WhiteWallBannerBlock::clone() const {
  std::shared_ptr<WhiteWallBannerBlock> copy = std::make_shared<WhiteWallBannerBlock>();
  copy->facing = facing;
  return copy;
}