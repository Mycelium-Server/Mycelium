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

#include "light_gray_banner_block.h"

LightGrayBannerBlock::LightGrayBannerBlock() = default;
LightGrayBannerBlock::~LightGrayBannerBlock() = default;

short LightGrayBannerBlock::getId() const {
  if (rotation == ROTATION_0) return 8766;
  if (rotation == ROTATION_1) return 8767;
  if (rotation == ROTATION_2) return 8768;
  if (rotation == ROTATION_3) return 8769;
  if (rotation == ROTATION_4) return 8770;
  if (rotation == ROTATION_5) return 8771;
  if (rotation == ROTATION_6) return 8772;
  if (rotation == ROTATION_7) return 8773;
  if (rotation == ROTATION_8) return 8774;
  if (rotation == ROTATION_9) return 8775;
  if (rotation == ROTATION_10) return 8776;
  if (rotation == ROTATION_11) return 8777;
  if (rotation == ROTATION_12) return 8778;
  if (rotation == ROTATION_13) return 8779;
  if (rotation == ROTATION_14) return 8780;
  if (rotation == ROTATION_15) return 8781;
  return 8766;
}
