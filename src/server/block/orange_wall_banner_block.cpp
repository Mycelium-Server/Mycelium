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


#include "orange_wall_banner_block.h"

OrangeWallBannerBlock::OrangeWallBannerBlock() = default;
OrangeWallBannerBlock::~OrangeWallBannerBlock() = default;

short OrangeWallBannerBlock::getId() const {
  if (facing == FACING_NORTH) return 8898;
  if (facing == FACING_SOUTH) return 8899;
  if (facing == FACING_WEST) return 8900;
  if (facing == FACING_EAST) return 8901;
  return 8898;
}

std::shared_ptr<Block> OrangeWallBannerBlock::clone() const {
  std::shared_ptr<OrangeWallBannerBlock> copy = std::make_shared<OrangeWallBannerBlock>();
  copy->facing = facing;
  return copy;
}
