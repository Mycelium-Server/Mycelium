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


#include "campfire_block.h"

CampfireBlock::CampfireBlock() = default;
CampfireBlock::~CampfireBlock() = default;

short CampfireBlock::getId() const {
  if (facing == FACING_NORTH && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_TRUE) return 16099;
  if (facing == FACING_NORTH && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_FALSE) return 16100;
  if (facing == FACING_NORTH && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_TRUE) return 16101;
  if (facing == FACING_NORTH && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_FALSE) return 16102;
  if (facing == FACING_NORTH && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_TRUE) return 16103;
  if (facing == FACING_NORTH && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_FALSE) return 16104;
  if (facing == FACING_NORTH && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_TRUE) return 16105;
  if (facing == FACING_NORTH && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_FALSE) return 16106;
  if (facing == FACING_SOUTH && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_TRUE) return 16107;
  if (facing == FACING_SOUTH && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_FALSE) return 16108;
  if (facing == FACING_SOUTH && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_TRUE) return 16109;
  if (facing == FACING_SOUTH && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_FALSE) return 16110;
  if (facing == FACING_SOUTH && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_TRUE) return 16111;
  if (facing == FACING_SOUTH && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_FALSE) return 16112;
  if (facing == FACING_SOUTH && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_TRUE) return 16113;
  if (facing == FACING_SOUTH && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_FALSE) return 16114;
  if (facing == FACING_WEST && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_TRUE) return 16115;
  if (facing == FACING_WEST && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_FALSE) return 16116;
  if (facing == FACING_WEST && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_TRUE) return 16117;
  if (facing == FACING_WEST && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_FALSE) return 16118;
  if (facing == FACING_WEST && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_TRUE) return 16119;
  if (facing == FACING_WEST && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_FALSE) return 16120;
  if (facing == FACING_WEST && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_TRUE) return 16121;
  if (facing == FACING_WEST && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_FALSE) return 16122;
  if (facing == FACING_EAST && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_TRUE) return 16123;
  if (facing == FACING_EAST && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_FALSE) return 16124;
  if (facing == FACING_EAST && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_TRUE) return 16125;
  if (facing == FACING_EAST && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_FALSE) return 16126;
  if (facing == FACING_EAST && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_TRUE) return 16127;
  if (facing == FACING_EAST && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_FALSE) return 16128;
  if (facing == FACING_EAST && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_TRUE) return 16129;
  if (facing == FACING_EAST && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_FALSE) return 16130;
  return 16102;
}

std::shared_ptr<Block> CampfireBlock::clone() const {
  std::shared_ptr<CampfireBlock> copy = std::make_shared<CampfireBlock>();
  copy->facing = facing;
  copy->lit = lit;
  copy->signal_fire = signal_fire;
  copy->waterlogged = waterlogged;
  return copy;
}
