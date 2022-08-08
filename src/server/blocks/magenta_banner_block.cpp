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


#include "magenta_banner_block.h"

MagentaBannerBlock::MagentaBannerBlock() = default;
MagentaBannerBlock::~MagentaBannerBlock() = default;

short MagentaBannerBlock::getId() const {
  if (rotation == ROTATION_0) return 8670;
  if (rotation == ROTATION_1) return 8671;
  if (rotation == ROTATION_2) return 8672;
  if (rotation == ROTATION_3) return 8673;
  if (rotation == ROTATION_4) return 8674;
  if (rotation == ROTATION_5) return 8675;
  if (rotation == ROTATION_6) return 8676;
  if (rotation == ROTATION_7) return 8677;
  if (rotation == ROTATION_8) return 8678;
  if (rotation == ROTATION_9) return 8679;
  if (rotation == ROTATION_10) return 8680;
  if (rotation == ROTATION_11) return 8681;
  if (rotation == ROTATION_12) return 8682;
  if (rotation == ROTATION_13) return 8683;
  if (rotation == ROTATION_14) return 8684;
  if (rotation == ROTATION_15) return 8685;
  return 8670;
}

std::shared_ptr<Block> MagentaBannerBlock::clone() const {
  std::shared_ptr<MagentaBannerBlock> copy = std::make_shared<MagentaBannerBlock>();
  copy->rotation = rotation;
  return copy;
}
