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

#include "ender_chest_block.h"

EnderChestBlock::EnderChestBlock() = default;
EnderChestBlock::~EnderChestBlock() = default;

short EnderChestBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 5843;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 5844;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 5845;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 5846;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 5847;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 5848;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 5849;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 5850;
  return 5844;
}
