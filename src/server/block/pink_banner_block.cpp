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


#include "pink_banner_block.h"

PinkBannerBlock::PinkBannerBlock() = default;
PinkBannerBlock::~PinkBannerBlock() = default;

short PinkBannerBlock::getId() const {
  if (rotation == ROTATION_0) return 8734;
  if (rotation == ROTATION_1) return 8735;
  if (rotation == ROTATION_2) return 8736;
  if (rotation == ROTATION_3) return 8737;
  if (rotation == ROTATION_4) return 8738;
  if (rotation == ROTATION_5) return 8739;
  if (rotation == ROTATION_6) return 8740;
  if (rotation == ROTATION_7) return 8741;
  if (rotation == ROTATION_8) return 8742;
  if (rotation == ROTATION_9) return 8743;
  if (rotation == ROTATION_10) return 8744;
  if (rotation == ROTATION_11) return 8745;
  if (rotation == ROTATION_12) return 8746;
  if (rotation == ROTATION_13) return 8747;
  if (rotation == ROTATION_14) return 8748;
  if (rotation == ROTATION_15) return 8749;
  return 8734;
}

std::shared_ptr<Block> PinkBannerBlock::clone() const {
  std::shared_ptr<PinkBannerBlock> copy = std::make_shared<PinkBannerBlock>();
  copy->rotation = rotation;
  return copy;
}
