/*
 * Mycelium
 * Copyright (C) 2022 - 2023  JNNGL
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


#include "yellow_wall_banner_block.h"

YellowWallBannerBlock::YellowWallBannerBlock() = default;
YellowWallBannerBlock::~YellowWallBannerBlock() = default;

short YellowWallBannerBlock::getId() const {
  return 8910 + facing * 1;
}

std::shared_ptr<Block> YellowWallBannerBlock::clone() const {
  std::shared_ptr<YellowWallBannerBlock> copy = std::make_shared<YellowWallBannerBlock>();
  copy->facing = facing;
  return copy;
}
