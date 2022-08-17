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


#include "acacia_sign_block.h"

AcaciaSignBlock::AcaciaSignBlock() = default;
AcaciaSignBlock::~AcaciaSignBlock() = default;

short AcaciaSignBlock::getId() const {
  if (rotation == ROTATION_0 && waterlogged == WATERLOGGED_TRUE) return 3732;
  if (rotation == ROTATION_0 && waterlogged == WATERLOGGED_FALSE) return 3733;
  if (rotation == ROTATION_1 && waterlogged == WATERLOGGED_TRUE) return 3734;
  if (rotation == ROTATION_1 && waterlogged == WATERLOGGED_FALSE) return 3735;
  if (rotation == ROTATION_2 && waterlogged == WATERLOGGED_TRUE) return 3736;
  if (rotation == ROTATION_2 && waterlogged == WATERLOGGED_FALSE) return 3737;
  if (rotation == ROTATION_3 && waterlogged == WATERLOGGED_TRUE) return 3738;
  if (rotation == ROTATION_3 && waterlogged == WATERLOGGED_FALSE) return 3739;
  if (rotation == ROTATION_4 && waterlogged == WATERLOGGED_TRUE) return 3740;
  if (rotation == ROTATION_4 && waterlogged == WATERLOGGED_FALSE) return 3741;
  if (rotation == ROTATION_5 && waterlogged == WATERLOGGED_TRUE) return 3742;
  if (rotation == ROTATION_5 && waterlogged == WATERLOGGED_FALSE) return 3743;
  if (rotation == ROTATION_6 && waterlogged == WATERLOGGED_TRUE) return 3744;
  if (rotation == ROTATION_6 && waterlogged == WATERLOGGED_FALSE) return 3745;
  if (rotation == ROTATION_7 && waterlogged == WATERLOGGED_TRUE) return 3746;
  if (rotation == ROTATION_7 && waterlogged == WATERLOGGED_FALSE) return 3747;
  if (rotation == ROTATION_8 && waterlogged == WATERLOGGED_TRUE) return 3748;
  if (rotation == ROTATION_8 && waterlogged == WATERLOGGED_FALSE) return 3749;
  if (rotation == ROTATION_9 && waterlogged == WATERLOGGED_TRUE) return 3750;
  if (rotation == ROTATION_9 && waterlogged == WATERLOGGED_FALSE) return 3751;
  if (rotation == ROTATION_10 && waterlogged == WATERLOGGED_TRUE) return 3752;
  if (rotation == ROTATION_10 && waterlogged == WATERLOGGED_FALSE) return 3753;
  if (rotation == ROTATION_11 && waterlogged == WATERLOGGED_TRUE) return 3754;
  if (rotation == ROTATION_11 && waterlogged == WATERLOGGED_FALSE) return 3755;
  if (rotation == ROTATION_12 && waterlogged == WATERLOGGED_TRUE) return 3756;
  if (rotation == ROTATION_12 && waterlogged == WATERLOGGED_FALSE) return 3757;
  if (rotation == ROTATION_13 && waterlogged == WATERLOGGED_TRUE) return 3758;
  if (rotation == ROTATION_13 && waterlogged == WATERLOGGED_FALSE) return 3759;
  if (rotation == ROTATION_14 && waterlogged == WATERLOGGED_TRUE) return 3760;
  if (rotation == ROTATION_14 && waterlogged == WATERLOGGED_FALSE) return 3761;
  if (rotation == ROTATION_15 && waterlogged == WATERLOGGED_TRUE) return 3762;
  if (rotation == ROTATION_15 && waterlogged == WATERLOGGED_FALSE) return 3763;
  return 3733;
}

std::shared_ptr<Block> AcaciaSignBlock::clone() const {
  std::shared_ptr<AcaciaSignBlock> copy = std::make_shared<AcaciaSignBlock>();
  copy->rotation = rotation;
  copy->waterlogged = waterlogged;
  return copy;
}
