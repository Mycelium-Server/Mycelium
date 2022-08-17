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


#include "medium_amethyst_bud_block.h"

MediumAmethystBudBlock::MediumAmethystBudBlock() = default;
MediumAmethystBudBlock::~MediumAmethystBudBlock() = default;

short MediumAmethystBudBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 18645;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 18646;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 18647;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 18648;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 18649;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 18650;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 18651;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 18652;
  if (facing == FACING_UP && waterlogged == WATERLOGGED_TRUE) return 18653;
  if (facing == FACING_UP && waterlogged == WATERLOGGED_FALSE) return 18654;
  if (facing == FACING_DOWN && waterlogged == WATERLOGGED_TRUE) return 18655;
  if (facing == FACING_DOWN && waterlogged == WATERLOGGED_FALSE) return 18656;
  return 18654;
}

std::shared_ptr<Block> MediumAmethystBudBlock::clone() const {
  std::shared_ptr<MediumAmethystBudBlock> copy = std::make_shared<MediumAmethystBudBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
