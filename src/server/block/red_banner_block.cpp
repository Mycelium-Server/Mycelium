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


#include "red_banner_block.h"

RedBannerBlock::RedBannerBlock() = default;
RedBannerBlock::~RedBannerBlock() = default;

short RedBannerBlock::getId() const {
  if (rotation == ROTATION_0) return 8862;
  if (rotation == ROTATION_1) return 8863;
  if (rotation == ROTATION_2) return 8864;
  if (rotation == ROTATION_3) return 8865;
  if (rotation == ROTATION_4) return 8866;
  if (rotation == ROTATION_5) return 8867;
  if (rotation == ROTATION_6) return 8868;
  if (rotation == ROTATION_7) return 8869;
  if (rotation == ROTATION_8) return 8870;
  if (rotation == ROTATION_9) return 8871;
  if (rotation == ROTATION_10) return 8872;
  if (rotation == ROTATION_11) return 8873;
  if (rotation == ROTATION_12) return 8874;
  if (rotation == ROTATION_13) return 8875;
  if (rotation == ROTATION_14) return 8876;
  if (rotation == ROTATION_15) return 8877;
  return 8862;
}

std::shared_ptr<Block> RedBannerBlock::clone() const {
  std::shared_ptr<RedBannerBlock> copy = std::make_shared<RedBannerBlock>();
  copy->rotation = rotation;
  return copy;
}
