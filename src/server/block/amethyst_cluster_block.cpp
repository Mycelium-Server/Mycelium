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


#include "amethyst_cluster_block.h"

AmethystClusterBlock::AmethystClusterBlock() = default;
AmethystClusterBlock::~AmethystClusterBlock() = default;

short AmethystClusterBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 18621;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 18622;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 18623;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 18624;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 18625;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 18626;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 18627;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 18628;
  if (facing == FACING_UP && waterlogged == WATERLOGGED_TRUE) return 18629;
  if (facing == FACING_UP && waterlogged == WATERLOGGED_FALSE) return 18630;
  if (facing == FACING_DOWN && waterlogged == WATERLOGGED_TRUE) return 18631;
  if (facing == FACING_DOWN && waterlogged == WATERLOGGED_FALSE) return 18632;
  return 18630;
}

std::shared_ptr<Block> AmethystClusterBlock::clone() const {
  std::shared_ptr<AmethystClusterBlock> copy = std::make_shared<AmethystClusterBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
