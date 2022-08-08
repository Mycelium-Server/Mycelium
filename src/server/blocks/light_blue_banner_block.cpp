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


#include "light_blue_banner_block.h"

LightBlueBannerBlock::LightBlueBannerBlock() = default;
LightBlueBannerBlock::~LightBlueBannerBlock() = default;

short LightBlueBannerBlock::getId() const {
  if (rotation == ROTATION_0) return 8686;
  if (rotation == ROTATION_1) return 8687;
  if (rotation == ROTATION_2) return 8688;
  if (rotation == ROTATION_3) return 8689;
  if (rotation == ROTATION_4) return 8690;
  if (rotation == ROTATION_5) return 8691;
  if (rotation == ROTATION_6) return 8692;
  if (rotation == ROTATION_7) return 8693;
  if (rotation == ROTATION_8) return 8694;
  if (rotation == ROTATION_9) return 8695;
  if (rotation == ROTATION_10) return 8696;
  if (rotation == ROTATION_11) return 8697;
  if (rotation == ROTATION_12) return 8698;
  if (rotation == ROTATION_13) return 8699;
  if (rotation == ROTATION_14) return 8700;
  if (rotation == ROTATION_15) return 8701;
  return 8686;
}

std::shared_ptr<Block> LightBlueBannerBlock::clone() const {
  std::shared_ptr<LightBlueBannerBlock> copy = std::make_shared<LightBlueBannerBlock>();
  copy->rotation = rotation;
  return copy;
}
