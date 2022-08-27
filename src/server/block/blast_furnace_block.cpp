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


#include "blast_furnace_block.h"

BlastFurnaceBlock::BlastFurnaceBlock() = default;
BlastFurnaceBlock::~BlastFurnaceBlock() = default;

short BlastFurnaceBlock::getId() const {
  if (facing == FACING_NORTH && lit == LIT_TRUE) return 16016;
  if (facing == FACING_NORTH && lit == LIT_FALSE) return 16017;
  if (facing == FACING_SOUTH && lit == LIT_TRUE) return 16018;
  if (facing == FACING_SOUTH && lit == LIT_FALSE) return 16019;
  if (facing == FACING_WEST && lit == LIT_TRUE) return 16020;
  if (facing == FACING_WEST && lit == LIT_FALSE) return 16021;
  if (facing == FACING_EAST && lit == LIT_TRUE) return 16022;
  if (facing == FACING_EAST && lit == LIT_FALSE) return 16023;
  return 16017;
}

std::shared_ptr<Block> BlastFurnaceBlock::clone() const {
  std::shared_ptr<BlastFurnaceBlock> copy = std::make_shared<BlastFurnaceBlock>();
  copy->facing = facing;
  copy->lit = lit;
  return copy;
}