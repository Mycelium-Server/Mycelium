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


#include "big_dripleaf_block.h"

BigDripleafBlock::BigDripleafBlock() = default;
BigDripleafBlock::~BigDripleafBlock() = default;

short BigDripleafBlock::getId() const {
  if (facing == FACING_NORTH && tilt == TILT_NONE && waterlogged == WATERLOGGED_TRUE) return 19718;
  if (facing == FACING_NORTH && tilt == TILT_NONE && waterlogged == WATERLOGGED_FALSE) return 19719;
  if (facing == FACING_NORTH && tilt == TILT_UNSTABLE && waterlogged == WATERLOGGED_TRUE) return 19720;
  if (facing == FACING_NORTH && tilt == TILT_UNSTABLE && waterlogged == WATERLOGGED_FALSE) return 19721;
  if (facing == FACING_NORTH && tilt == TILT_PARTIAL && waterlogged == WATERLOGGED_TRUE) return 19722;
  if (facing == FACING_NORTH && tilt == TILT_PARTIAL && waterlogged == WATERLOGGED_FALSE) return 19723;
  if (facing == FACING_NORTH && tilt == TILT_FULL && waterlogged == WATERLOGGED_TRUE) return 19724;
  if (facing == FACING_NORTH && tilt == TILT_FULL && waterlogged == WATERLOGGED_FALSE) return 19725;
  if (facing == FACING_SOUTH && tilt == TILT_NONE && waterlogged == WATERLOGGED_TRUE) return 19726;
  if (facing == FACING_SOUTH && tilt == TILT_NONE && waterlogged == WATERLOGGED_FALSE) return 19727;
  if (facing == FACING_SOUTH && tilt == TILT_UNSTABLE && waterlogged == WATERLOGGED_TRUE) return 19728;
  if (facing == FACING_SOUTH && tilt == TILT_UNSTABLE && waterlogged == WATERLOGGED_FALSE) return 19729;
  if (facing == FACING_SOUTH && tilt == TILT_PARTIAL && waterlogged == WATERLOGGED_TRUE) return 19730;
  if (facing == FACING_SOUTH && tilt == TILT_PARTIAL && waterlogged == WATERLOGGED_FALSE) return 19731;
  if (facing == FACING_SOUTH && tilt == TILT_FULL && waterlogged == WATERLOGGED_TRUE) return 19732;
  if (facing == FACING_SOUTH && tilt == TILT_FULL && waterlogged == WATERLOGGED_FALSE) return 19733;
  if (facing == FACING_WEST && tilt == TILT_NONE && waterlogged == WATERLOGGED_TRUE) return 19734;
  if (facing == FACING_WEST && tilt == TILT_NONE && waterlogged == WATERLOGGED_FALSE) return 19735;
  if (facing == FACING_WEST && tilt == TILT_UNSTABLE && waterlogged == WATERLOGGED_TRUE) return 19736;
  if (facing == FACING_WEST && tilt == TILT_UNSTABLE && waterlogged == WATERLOGGED_FALSE) return 19737;
  if (facing == FACING_WEST && tilt == TILT_PARTIAL && waterlogged == WATERLOGGED_TRUE) return 19738;
  if (facing == FACING_WEST && tilt == TILT_PARTIAL && waterlogged == WATERLOGGED_FALSE) return 19739;
  if (facing == FACING_WEST && tilt == TILT_FULL && waterlogged == WATERLOGGED_TRUE) return 19740;
  if (facing == FACING_WEST && tilt == TILT_FULL && waterlogged == WATERLOGGED_FALSE) return 19741;
  if (facing == FACING_EAST && tilt == TILT_NONE && waterlogged == WATERLOGGED_TRUE) return 19742;
  if (facing == FACING_EAST && tilt == TILT_NONE && waterlogged == WATERLOGGED_FALSE) return 19743;
  if (facing == FACING_EAST && tilt == TILT_UNSTABLE && waterlogged == WATERLOGGED_TRUE) return 19744;
  if (facing == FACING_EAST && tilt == TILT_UNSTABLE && waterlogged == WATERLOGGED_FALSE) return 19745;
  if (facing == FACING_EAST && tilt == TILT_PARTIAL && waterlogged == WATERLOGGED_TRUE) return 19746;
  if (facing == FACING_EAST && tilt == TILT_PARTIAL && waterlogged == WATERLOGGED_FALSE) return 19747;
  if (facing == FACING_EAST && tilt == TILT_FULL && waterlogged == WATERLOGGED_TRUE) return 19748;
  if (facing == FACING_EAST && tilt == TILT_FULL && waterlogged == WATERLOGGED_FALSE) return 19749;
  return 19719;
}

std::shared_ptr<Block> BigDripleafBlock::clone() const {
  std::shared_ptr<BigDripleafBlock> copy = std::make_shared<BigDripleafBlock>();
  copy->facing = facing;
  copy->tilt = tilt;
  copy->waterlogged = waterlogged;
  return copy;
}
