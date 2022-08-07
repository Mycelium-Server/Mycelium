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

#include "spruce_sign_block.h"

SpruceSignBlock::SpruceSignBlock() = default;
SpruceSignBlock::~SpruceSignBlock() = default;

short SpruceSignBlock::getId() const {
  if (rotation == ROTATION_0 && waterlogged == WATERLOGGED_TRUE) return 3668;
  if (rotation == ROTATION_0 && waterlogged == WATERLOGGED_FALSE) return 3669;
  if (rotation == ROTATION_1 && waterlogged == WATERLOGGED_TRUE) return 3670;
  if (rotation == ROTATION_1 && waterlogged == WATERLOGGED_FALSE) return 3671;
  if (rotation == ROTATION_2 && waterlogged == WATERLOGGED_TRUE) return 3672;
  if (rotation == ROTATION_2 && waterlogged == WATERLOGGED_FALSE) return 3673;
  if (rotation == ROTATION_3 && waterlogged == WATERLOGGED_TRUE) return 3674;
  if (rotation == ROTATION_3 && waterlogged == WATERLOGGED_FALSE) return 3675;
  if (rotation == ROTATION_4 && waterlogged == WATERLOGGED_TRUE) return 3676;
  if (rotation == ROTATION_4 && waterlogged == WATERLOGGED_FALSE) return 3677;
  if (rotation == ROTATION_5 && waterlogged == WATERLOGGED_TRUE) return 3678;
  if (rotation == ROTATION_5 && waterlogged == WATERLOGGED_FALSE) return 3679;
  if (rotation == ROTATION_6 && waterlogged == WATERLOGGED_TRUE) return 3680;
  if (rotation == ROTATION_6 && waterlogged == WATERLOGGED_FALSE) return 3681;
  if (rotation == ROTATION_7 && waterlogged == WATERLOGGED_TRUE) return 3682;
  if (rotation == ROTATION_7 && waterlogged == WATERLOGGED_FALSE) return 3683;
  if (rotation == ROTATION_8 && waterlogged == WATERLOGGED_TRUE) return 3684;
  if (rotation == ROTATION_8 && waterlogged == WATERLOGGED_FALSE) return 3685;
  if (rotation == ROTATION_9 && waterlogged == WATERLOGGED_TRUE) return 3686;
  if (rotation == ROTATION_9 && waterlogged == WATERLOGGED_FALSE) return 3687;
  if (rotation == ROTATION_10 && waterlogged == WATERLOGGED_TRUE) return 3688;
  if (rotation == ROTATION_10 && waterlogged == WATERLOGGED_FALSE) return 3689;
  if (rotation == ROTATION_11 && waterlogged == WATERLOGGED_TRUE) return 3690;
  if (rotation == ROTATION_11 && waterlogged == WATERLOGGED_FALSE) return 3691;
  if (rotation == ROTATION_12 && waterlogged == WATERLOGGED_TRUE) return 3692;
  if (rotation == ROTATION_12 && waterlogged == WATERLOGGED_FALSE) return 3693;
  if (rotation == ROTATION_13 && waterlogged == WATERLOGGED_TRUE) return 3694;
  if (rotation == ROTATION_13 && waterlogged == WATERLOGGED_FALSE) return 3695;
  if (rotation == ROTATION_14 && waterlogged == WATERLOGGED_TRUE) return 3696;
  if (rotation == ROTATION_14 && waterlogged == WATERLOGGED_FALSE) return 3697;
  if (rotation == ROTATION_15 && waterlogged == WATERLOGGED_TRUE) return 3698;
  if (rotation == ROTATION_15 && waterlogged == WATERLOGGED_FALSE) return 3699;
  return 3669;
}
