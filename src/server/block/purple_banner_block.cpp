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


#include "purple_banner_block.h"

PurpleBannerBlock::PurpleBannerBlock() = default;
PurpleBannerBlock::~PurpleBannerBlock() = default;

short PurpleBannerBlock::getId() const {
  if (rotation == ROTATION_0) return 8798;
  if (rotation == ROTATION_1) return 8799;
  if (rotation == ROTATION_2) return 8800;
  if (rotation == ROTATION_3) return 8801;
  if (rotation == ROTATION_4) return 8802;
  if (rotation == ROTATION_5) return 8803;
  if (rotation == ROTATION_6) return 8804;
  if (rotation == ROTATION_7) return 8805;
  if (rotation == ROTATION_8) return 8806;
  if (rotation == ROTATION_9) return 8807;
  if (rotation == ROTATION_10) return 8808;
  if (rotation == ROTATION_11) return 8809;
  if (rotation == ROTATION_12) return 8810;
  if (rotation == ROTATION_13) return 8811;
  if (rotation == ROTATION_14) return 8812;
  if (rotation == ROTATION_15) return 8813;
  return 8798;
}

std::shared_ptr<Block> PurpleBannerBlock::clone() const {
  std::shared_ptr<PurpleBannerBlock> copy = std::make_shared<PurpleBannerBlock>();
  copy->rotation = rotation;
  return copy;
}
