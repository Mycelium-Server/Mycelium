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


#include "mangrove_sign_block.h"

MangroveSignBlock::MangroveSignBlock() = default;
MangroveSignBlock::~MangroveSignBlock() = default;

short MangroveSignBlock::getId() const {
  if (rotation == ROTATION_0 && waterlogged == WATERLOGGED_TRUE) return 3828;
  if (rotation == ROTATION_0 && waterlogged == WATERLOGGED_FALSE) return 3829;
  if (rotation == ROTATION_1 && waterlogged == WATERLOGGED_TRUE) return 3830;
  if (rotation == ROTATION_1 && waterlogged == WATERLOGGED_FALSE) return 3831;
  if (rotation == ROTATION_2 && waterlogged == WATERLOGGED_TRUE) return 3832;
  if (rotation == ROTATION_2 && waterlogged == WATERLOGGED_FALSE) return 3833;
  if (rotation == ROTATION_3 && waterlogged == WATERLOGGED_TRUE) return 3834;
  if (rotation == ROTATION_3 && waterlogged == WATERLOGGED_FALSE) return 3835;
  if (rotation == ROTATION_4 && waterlogged == WATERLOGGED_TRUE) return 3836;
  if (rotation == ROTATION_4 && waterlogged == WATERLOGGED_FALSE) return 3837;
  if (rotation == ROTATION_5 && waterlogged == WATERLOGGED_TRUE) return 3838;
  if (rotation == ROTATION_5 && waterlogged == WATERLOGGED_FALSE) return 3839;
  if (rotation == ROTATION_6 && waterlogged == WATERLOGGED_TRUE) return 3840;
  if (rotation == ROTATION_6 && waterlogged == WATERLOGGED_FALSE) return 3841;
  if (rotation == ROTATION_7 && waterlogged == WATERLOGGED_TRUE) return 3842;
  if (rotation == ROTATION_7 && waterlogged == WATERLOGGED_FALSE) return 3843;
  if (rotation == ROTATION_8 && waterlogged == WATERLOGGED_TRUE) return 3844;
  if (rotation == ROTATION_8 && waterlogged == WATERLOGGED_FALSE) return 3845;
  if (rotation == ROTATION_9 && waterlogged == WATERLOGGED_TRUE) return 3846;
  if (rotation == ROTATION_9 && waterlogged == WATERLOGGED_FALSE) return 3847;
  if (rotation == ROTATION_10 && waterlogged == WATERLOGGED_TRUE) return 3848;
  if (rotation == ROTATION_10 && waterlogged == WATERLOGGED_FALSE) return 3849;
  if (rotation == ROTATION_11 && waterlogged == WATERLOGGED_TRUE) return 3850;
  if (rotation == ROTATION_11 && waterlogged == WATERLOGGED_FALSE) return 3851;
  if (rotation == ROTATION_12 && waterlogged == WATERLOGGED_TRUE) return 3852;
  if (rotation == ROTATION_12 && waterlogged == WATERLOGGED_FALSE) return 3853;
  if (rotation == ROTATION_13 && waterlogged == WATERLOGGED_TRUE) return 3854;
  if (rotation == ROTATION_13 && waterlogged == WATERLOGGED_FALSE) return 3855;
  if (rotation == ROTATION_14 && waterlogged == WATERLOGGED_TRUE) return 3856;
  if (rotation == ROTATION_14 && waterlogged == WATERLOGGED_FALSE) return 3857;
  if (rotation == ROTATION_15 && waterlogged == WATERLOGGED_TRUE) return 3858;
  if (rotation == ROTATION_15 && waterlogged == WATERLOGGED_FALSE) return 3859;
  return 3829;
}

std::shared_ptr<Block> MangroveSignBlock::clone() const {
  std::shared_ptr<MangroveSignBlock> copy = std::make_shared<MangroveSignBlock>();
  copy->rotation = rotation;
  copy->waterlogged = waterlogged;
  return copy;
}