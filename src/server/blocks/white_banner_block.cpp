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


#include "white_banner_block.h"

WhiteBannerBlock::WhiteBannerBlock() = default;
WhiteBannerBlock::~WhiteBannerBlock() = default;

short WhiteBannerBlock::getId() const {
  if (rotation == ROTATION_0) return 8638;
  if (rotation == ROTATION_1) return 8639;
  if (rotation == ROTATION_2) return 8640;
  if (rotation == ROTATION_3) return 8641;
  if (rotation == ROTATION_4) return 8642;
  if (rotation == ROTATION_5) return 8643;
  if (rotation == ROTATION_6) return 8644;
  if (rotation == ROTATION_7) return 8645;
  if (rotation == ROTATION_8) return 8646;
  if (rotation == ROTATION_9) return 8647;
  if (rotation == ROTATION_10) return 8648;
  if (rotation == ROTATION_11) return 8649;
  if (rotation == ROTATION_12) return 8650;
  if (rotation == ROTATION_13) return 8651;
  if (rotation == ROTATION_14) return 8652;
  if (rotation == ROTATION_15) return 8653;
  return 8638;
}

std::shared_ptr<Block> WhiteBannerBlock::clone() const {
  std::shared_ptr<WhiteBannerBlock> copy = std::make_shared<WhiteBannerBlock>();
  copy->rotation = rotation;
  return copy;
}
