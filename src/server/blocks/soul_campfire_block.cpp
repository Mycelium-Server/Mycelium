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


#include "soul_campfire_block.h"

SoulCampfireBlock::SoulCampfireBlock() = default;
SoulCampfireBlock::~SoulCampfireBlock() = default;

short SoulCampfireBlock::getId() const {
  if (facing == FACING_NORTH && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_TRUE) return 16131;
  if (facing == FACING_NORTH && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_FALSE) return 16132;
  if (facing == FACING_NORTH && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_TRUE) return 16133;
  if (facing == FACING_NORTH && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_FALSE) return 16134;
  if (facing == FACING_NORTH && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_TRUE) return 16135;
  if (facing == FACING_NORTH && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_FALSE) return 16136;
  if (facing == FACING_NORTH && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_TRUE) return 16137;
  if (facing == FACING_NORTH && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_FALSE) return 16138;
  if (facing == FACING_SOUTH && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_TRUE) return 16139;
  if (facing == FACING_SOUTH && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_FALSE) return 16140;
  if (facing == FACING_SOUTH && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_TRUE) return 16141;
  if (facing == FACING_SOUTH && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_FALSE) return 16142;
  if (facing == FACING_SOUTH && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_TRUE) return 16143;
  if (facing == FACING_SOUTH && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_FALSE) return 16144;
  if (facing == FACING_SOUTH && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_TRUE) return 16145;
  if (facing == FACING_SOUTH && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_FALSE) return 16146;
  if (facing == FACING_WEST && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_TRUE) return 16147;
  if (facing == FACING_WEST && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_FALSE) return 16148;
  if (facing == FACING_WEST && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_TRUE) return 16149;
  if (facing == FACING_WEST && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_FALSE) return 16150;
  if (facing == FACING_WEST && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_TRUE) return 16151;
  if (facing == FACING_WEST && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_FALSE) return 16152;
  if (facing == FACING_WEST && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_TRUE) return 16153;
  if (facing == FACING_WEST && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_FALSE) return 16154;
  if (facing == FACING_EAST && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_TRUE) return 16155;
  if (facing == FACING_EAST && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_FALSE) return 16156;
  if (facing == FACING_EAST && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_TRUE) return 16157;
  if (facing == FACING_EAST && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_FALSE) return 16158;
  if (facing == FACING_EAST && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_TRUE) return 16159;
  if (facing == FACING_EAST && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_FALSE) return 16160;
  if (facing == FACING_EAST && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_TRUE) return 16161;
  if (facing == FACING_EAST && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_FALSE) return 16162;
  return 16134;
}

std::shared_ptr<Block> SoulCampfireBlock::clone() const {
  std::shared_ptr<SoulCampfireBlock> copy = std::make_shared<SoulCampfireBlock>();
  copy->facing = facing;
  copy->lit = lit;
  copy->signal_fire = signal_fire;
  copy->waterlogged = waterlogged;
  return copy;
}
