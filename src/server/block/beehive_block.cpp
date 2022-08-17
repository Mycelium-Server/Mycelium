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


#include "beehive_block.h"

BeehiveBlock::BeehiveBlock() = default;
BeehiveBlock::~BeehiveBlock() = default;

short BeehiveBlock::getId() const {
  if (facing == FACING_NORTH && honey_level == HONEY_LEVEL_0) return 17009;
  if (facing == FACING_NORTH && honey_level == HONEY_LEVEL_1) return 17010;
  if (facing == FACING_NORTH && honey_level == HONEY_LEVEL_2) return 17011;
  if (facing == FACING_NORTH && honey_level == HONEY_LEVEL_3) return 17012;
  if (facing == FACING_NORTH && honey_level == HONEY_LEVEL_4) return 17013;
  if (facing == FACING_NORTH && honey_level == HONEY_LEVEL_5) return 17014;
  if (facing == FACING_SOUTH && honey_level == HONEY_LEVEL_0) return 17015;
  if (facing == FACING_SOUTH && honey_level == HONEY_LEVEL_1) return 17016;
  if (facing == FACING_SOUTH && honey_level == HONEY_LEVEL_2) return 17017;
  if (facing == FACING_SOUTH && honey_level == HONEY_LEVEL_3) return 17018;
  if (facing == FACING_SOUTH && honey_level == HONEY_LEVEL_4) return 17019;
  if (facing == FACING_SOUTH && honey_level == HONEY_LEVEL_5) return 17020;
  if (facing == FACING_WEST && honey_level == HONEY_LEVEL_0) return 17021;
  if (facing == FACING_WEST && honey_level == HONEY_LEVEL_1) return 17022;
  if (facing == FACING_WEST && honey_level == HONEY_LEVEL_2) return 17023;
  if (facing == FACING_WEST && honey_level == HONEY_LEVEL_3) return 17024;
  if (facing == FACING_WEST && honey_level == HONEY_LEVEL_4) return 17025;
  if (facing == FACING_WEST && honey_level == HONEY_LEVEL_5) return 17026;
  if (facing == FACING_EAST && honey_level == HONEY_LEVEL_0) return 17027;
  if (facing == FACING_EAST && honey_level == HONEY_LEVEL_1) return 17028;
  if (facing == FACING_EAST && honey_level == HONEY_LEVEL_2) return 17029;
  if (facing == FACING_EAST && honey_level == HONEY_LEVEL_3) return 17030;
  if (facing == FACING_EAST && honey_level == HONEY_LEVEL_4) return 17031;
  if (facing == FACING_EAST && honey_level == HONEY_LEVEL_5) return 17032;
  return 17009;
}

std::shared_ptr<Block> BeehiveBlock::clone() const {
  std::shared_ptr<BeehiveBlock> copy = std::make_shared<BeehiveBlock>();
  copy->facing = facing;
  copy->honey_level = honey_level;
  return copy;
}
