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


#include "light_blue_wall_banner_block.h"

LightBlueWallBannerBlock::LightBlueWallBannerBlock() = default;
LightBlueWallBannerBlock::~LightBlueWallBannerBlock() = default;

short LightBlueWallBannerBlock::getId() const {
  return 8906 + facing * 1;
}

std::shared_ptr<Block> LightBlueWallBannerBlock::clone() const {
  std::shared_ptr<LightBlueWallBannerBlock> copy = std::make_shared<LightBlueWallBannerBlock>();
  copy->facing = facing;
  return copy;
}
