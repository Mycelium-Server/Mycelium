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

#include "yellow_banner_block.h"

YellowBannerBlock::YellowBannerBlock() = default;
YellowBannerBlock::~YellowBannerBlock() = default;

short YellowBannerBlock::getId() const {
  if (rotation == ROTATION_0) return 8702;
  if (rotation == ROTATION_1) return 8703;
  if (rotation == ROTATION_2) return 8704;
  if (rotation == ROTATION_3) return 8705;
  if (rotation == ROTATION_4) return 8706;
  if (rotation == ROTATION_5) return 8707;
  if (rotation == ROTATION_6) return 8708;
  if (rotation == ROTATION_7) return 8709;
  if (rotation == ROTATION_8) return 8710;
  if (rotation == ROTATION_9) return 8711;
  if (rotation == ROTATION_10) return 8712;
  if (rotation == ROTATION_11) return 8713;
  if (rotation == ROTATION_12) return 8714;
  if (rotation == ROTATION_13) return 8715;
  if (rotation == ROTATION_14) return 8716;
  if (rotation == ROTATION_15) return 8717;
  return 8702;
}
