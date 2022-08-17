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


#include "gray_banner_block.h"

GrayBannerBlock::GrayBannerBlock() = default;
GrayBannerBlock::~GrayBannerBlock() = default;

short GrayBannerBlock::getId() const {
  if (rotation == ROTATION_0) return 8750;
  if (rotation == ROTATION_1) return 8751;
  if (rotation == ROTATION_2) return 8752;
  if (rotation == ROTATION_3) return 8753;
  if (rotation == ROTATION_4) return 8754;
  if (rotation == ROTATION_5) return 8755;
  if (rotation == ROTATION_6) return 8756;
  if (rotation == ROTATION_7) return 8757;
  if (rotation == ROTATION_8) return 8758;
  if (rotation == ROTATION_9) return 8759;
  if (rotation == ROTATION_10) return 8760;
  if (rotation == ROTATION_11) return 8761;
  if (rotation == ROTATION_12) return 8762;
  if (rotation == ROTATION_13) return 8763;
  if (rotation == ROTATION_14) return 8764;
  if (rotation == ROTATION_15) return 8765;
  return 8750;
}

std::shared_ptr<Block> GrayBannerBlock::clone() const {
  std::shared_ptr<GrayBannerBlock> copy = std::make_shared<GrayBannerBlock>();
  copy->rotation = rotation;
  return copy;
}
