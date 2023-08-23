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


#include "black_banner_block.h"

BlackBannerBlock::BlackBannerBlock() = default;
BlackBannerBlock::~BlackBannerBlock() = default;

short BlackBannerBlock::getId() const {
  return 8878 + rotation * 1;
}

std::shared_ptr<Block> BlackBannerBlock::clone() const {
  std::shared_ptr<BlackBannerBlock> copy = std::make_shared<BlackBannerBlock>();
  copy->rotation = rotation;
  return copy;
}
