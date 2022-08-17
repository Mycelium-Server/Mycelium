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


#include "pink_wall_banner_block.h"

PinkWallBannerBlock::PinkWallBannerBlock() = default;
PinkWallBannerBlock::~PinkWallBannerBlock() = default;

short PinkWallBannerBlock::getId() const {
  if (facing == FACING_NORTH) return 8918;
  if (facing == FACING_SOUTH) return 8919;
  if (facing == FACING_WEST) return 8920;
  if (facing == FACING_EAST) return 8921;
  return 8918;
}

std::shared_ptr<Block> PinkWallBannerBlock::clone() const {
  std::shared_ptr<PinkWallBannerBlock> copy = std::make_shared<PinkWallBannerBlock>();
  copy->facing = facing;
  return copy;
}
