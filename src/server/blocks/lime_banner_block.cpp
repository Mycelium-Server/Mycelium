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


#include "lime_banner_block.h"

LimeBannerBlock::LimeBannerBlock() = default;
LimeBannerBlock::~LimeBannerBlock() = default;

short LimeBannerBlock::getId() const {
  if (rotation == ROTATION_0) return 8718;
  if (rotation == ROTATION_1) return 8719;
  if (rotation == ROTATION_2) return 8720;
  if (rotation == ROTATION_3) return 8721;
  if (rotation == ROTATION_4) return 8722;
  if (rotation == ROTATION_5) return 8723;
  if (rotation == ROTATION_6) return 8724;
  if (rotation == ROTATION_7) return 8725;
  if (rotation == ROTATION_8) return 8726;
  if (rotation == ROTATION_9) return 8727;
  if (rotation == ROTATION_10) return 8728;
  if (rotation == ROTATION_11) return 8729;
  if (rotation == ROTATION_12) return 8730;
  if (rotation == ROTATION_13) return 8731;
  if (rotation == ROTATION_14) return 8732;
  if (rotation == ROTATION_15) return 8733;
  return 8718;
}

std::shared_ptr<Block> LimeBannerBlock::clone() const {
  std::shared_ptr<LimeBannerBlock> copy = std::make_shared<LimeBannerBlock>();
  copy->rotation = rotation;
  return copy;
}
