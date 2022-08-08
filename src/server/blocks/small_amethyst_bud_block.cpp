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


#include "small_amethyst_bud_block.h"

SmallAmethystBudBlock::SmallAmethystBudBlock() = default;
SmallAmethystBudBlock::~SmallAmethystBudBlock() = default;

short SmallAmethystBudBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 18657;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 18658;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 18659;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 18660;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 18661;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 18662;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 18663;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 18664;
  if (facing == FACING_UP && waterlogged == WATERLOGGED_TRUE) return 18665;
  if (facing == FACING_UP && waterlogged == WATERLOGGED_FALSE) return 18666;
  if (facing == FACING_DOWN && waterlogged == WATERLOGGED_TRUE) return 18667;
  if (facing == FACING_DOWN && waterlogged == WATERLOGGED_FALSE) return 18668;
  return 18666;
}

std::shared_ptr<Block> SmallAmethystBudBlock::clone() const {
  std::shared_ptr<SmallAmethystBudBlock> copy = std::make_shared<SmallAmethystBudBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
