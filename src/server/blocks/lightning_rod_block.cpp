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

#include "lightning_rod_block.h"

LightningRodBlock::LightningRodBlock() = default;
LightningRodBlock::~LightningRodBlock() = default;

short LightningRodBlock::getId() const {
  if (facing == FACING_NORTH && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 19614;
  if (facing == FACING_NORTH && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 19615;
  if (facing == FACING_NORTH && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 19616;
  if (facing == FACING_NORTH && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 19617;
  if (facing == FACING_EAST && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 19618;
  if (facing == FACING_EAST && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 19619;
  if (facing == FACING_EAST && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 19620;
  if (facing == FACING_EAST && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 19621;
  if (facing == FACING_SOUTH && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 19622;
  if (facing == FACING_SOUTH && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 19623;
  if (facing == FACING_SOUTH && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 19624;
  if (facing == FACING_SOUTH && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 19625;
  if (facing == FACING_WEST && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 19626;
  if (facing == FACING_WEST && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 19627;
  if (facing == FACING_WEST && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 19628;
  if (facing == FACING_WEST && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 19629;
  if (facing == FACING_UP && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 19630;
  if (facing == FACING_UP && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 19631;
  if (facing == FACING_UP && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 19632;
  if (facing == FACING_UP && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 19633;
  if (facing == FACING_DOWN && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 19634;
  if (facing == FACING_DOWN && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 19635;
  if (facing == FACING_DOWN && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 19636;
  if (facing == FACING_DOWN && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 19637;
  return 19633;
}
