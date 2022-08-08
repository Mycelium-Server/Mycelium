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


#include "player_head_block.h"

PlayerHeadBlock::PlayerHeadBlock() = default;
PlayerHeadBlock::~PlayerHeadBlock() = default;

short PlayerHeadBlock::getId() const {
  if (rotation == ROTATION_0) return 7167;
  if (rotation == ROTATION_1) return 7168;
  if (rotation == ROTATION_2) return 7169;
  if (rotation == ROTATION_3) return 7170;
  if (rotation == ROTATION_4) return 7171;
  if (rotation == ROTATION_5) return 7172;
  if (rotation == ROTATION_6) return 7173;
  if (rotation == ROTATION_7) return 7174;
  if (rotation == ROTATION_8) return 7175;
  if (rotation == ROTATION_9) return 7176;
  if (rotation == ROTATION_10) return 7177;
  if (rotation == ROTATION_11) return 7178;
  if (rotation == ROTATION_12) return 7179;
  if (rotation == ROTATION_13) return 7180;
  if (rotation == ROTATION_14) return 7181;
  if (rotation == ROTATION_15) return 7182;
  return 7167;
}

std::shared_ptr<Block> PlayerHeadBlock::clone() const {
  std::shared_ptr<PlayerHeadBlock> copy = std::make_shared<PlayerHeadBlock>();
  copy->rotation = rotation;
  return copy;
}
