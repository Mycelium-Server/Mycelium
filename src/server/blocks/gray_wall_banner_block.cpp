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


#include "gray_wall_banner_block.h"

GrayWallBannerBlock::GrayWallBannerBlock() = default;
GrayWallBannerBlock::~GrayWallBannerBlock() = default;

short GrayWallBannerBlock::getId() const {
  if (facing == FACING_NORTH) return 8922;
  if (facing == FACING_SOUTH) return 8923;
  if (facing == FACING_WEST) return 8924;
  if (facing == FACING_EAST) return 8925;
  return 8922;
}

std::shared_ptr<Block> GrayWallBannerBlock::clone() const {
  std::shared_ptr<GrayWallBannerBlock> copy = std::make_shared<GrayWallBannerBlock>();
  copy->facing = facing;
  return copy;
}
