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

#include "black_banner_block.h"

BlackBannerBlock::BlackBannerBlock() = default;
BlackBannerBlock::~BlackBannerBlock() = default;

short BlackBannerBlock::getId() const {
  if (rotation == ROTATION_0) return 8878;
  if (rotation == ROTATION_1) return 8879;
  if (rotation == ROTATION_2) return 8880;
  if (rotation == ROTATION_3) return 8881;
  if (rotation == ROTATION_4) return 8882;
  if (rotation == ROTATION_5) return 8883;
  if (rotation == ROTATION_6) return 8884;
  if (rotation == ROTATION_7) return 8885;
  if (rotation == ROTATION_8) return 8886;
  if (rotation == ROTATION_9) return 8887;
  if (rotation == ROTATION_10) return 8888;
  if (rotation == ROTATION_11) return 8889;
  if (rotation == ROTATION_12) return 8890;
  if (rotation == ROTATION_13) return 8891;
  if (rotation == ROTATION_14) return 8892;
  if (rotation == ROTATION_15) return 8893;
  return 8878;
}
