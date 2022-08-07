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

#include "birch_sign_block.h"

BirchSignBlock::BirchSignBlock() = default;
BirchSignBlock::~BirchSignBlock() = default;

short BirchSignBlock::getId() const {
  if (rotation == ROTATION_0 && waterlogged == WATERLOGGED_TRUE) return 3700;
  if (rotation == ROTATION_0 && waterlogged == WATERLOGGED_FALSE) return 3701;
  if (rotation == ROTATION_1 && waterlogged == WATERLOGGED_TRUE) return 3702;
  if (rotation == ROTATION_1 && waterlogged == WATERLOGGED_FALSE) return 3703;
  if (rotation == ROTATION_2 && waterlogged == WATERLOGGED_TRUE) return 3704;
  if (rotation == ROTATION_2 && waterlogged == WATERLOGGED_FALSE) return 3705;
  if (rotation == ROTATION_3 && waterlogged == WATERLOGGED_TRUE) return 3706;
  if (rotation == ROTATION_3 && waterlogged == WATERLOGGED_FALSE) return 3707;
  if (rotation == ROTATION_4 && waterlogged == WATERLOGGED_TRUE) return 3708;
  if (rotation == ROTATION_4 && waterlogged == WATERLOGGED_FALSE) return 3709;
  if (rotation == ROTATION_5 && waterlogged == WATERLOGGED_TRUE) return 3710;
  if (rotation == ROTATION_5 && waterlogged == WATERLOGGED_FALSE) return 3711;
  if (rotation == ROTATION_6 && waterlogged == WATERLOGGED_TRUE) return 3712;
  if (rotation == ROTATION_6 && waterlogged == WATERLOGGED_FALSE) return 3713;
  if (rotation == ROTATION_7 && waterlogged == WATERLOGGED_TRUE) return 3714;
  if (rotation == ROTATION_7 && waterlogged == WATERLOGGED_FALSE) return 3715;
  if (rotation == ROTATION_8 && waterlogged == WATERLOGGED_TRUE) return 3716;
  if (rotation == ROTATION_8 && waterlogged == WATERLOGGED_FALSE) return 3717;
  if (rotation == ROTATION_9 && waterlogged == WATERLOGGED_TRUE) return 3718;
  if (rotation == ROTATION_9 && waterlogged == WATERLOGGED_FALSE) return 3719;
  if (rotation == ROTATION_10 && waterlogged == WATERLOGGED_TRUE) return 3720;
  if (rotation == ROTATION_10 && waterlogged == WATERLOGGED_FALSE) return 3721;
  if (rotation == ROTATION_11 && waterlogged == WATERLOGGED_TRUE) return 3722;
  if (rotation == ROTATION_11 && waterlogged == WATERLOGGED_FALSE) return 3723;
  if (rotation == ROTATION_12 && waterlogged == WATERLOGGED_TRUE) return 3724;
  if (rotation == ROTATION_12 && waterlogged == WATERLOGGED_FALSE) return 3725;
  if (rotation == ROTATION_13 && waterlogged == WATERLOGGED_TRUE) return 3726;
  if (rotation == ROTATION_13 && waterlogged == WATERLOGGED_FALSE) return 3727;
  if (rotation == ROTATION_14 && waterlogged == WATERLOGGED_TRUE) return 3728;
  if (rotation == ROTATION_14 && waterlogged == WATERLOGGED_FALSE) return 3729;
  if (rotation == ROTATION_15 && waterlogged == WATERLOGGED_TRUE) return 3730;
  if (rotation == ROTATION_15 && waterlogged == WATERLOGGED_FALSE) return 3731;
  return 3701;
}
