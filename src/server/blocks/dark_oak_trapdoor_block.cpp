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

#include "dark_oak_trapdoor_block.h"

DarkOakTrapdoorBlock::DarkOakTrapdoorBlock() = default;
DarkOakTrapdoorBlock::~DarkOakTrapdoorBlock() = default;

short DarkOakTrapdoorBlock::getId() const {
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4740;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4741;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4742;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4743;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4744;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4745;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4746;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4747;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4748;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4749;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4750;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4751;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4752;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4753;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4754;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4755;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4756;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4757;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4758;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4759;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4760;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4761;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4762;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4763;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4764;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4765;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4766;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4767;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4768;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4769;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4770;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4771;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4772;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4773;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4774;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4775;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4776;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4777;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4778;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4779;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4780;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4781;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4782;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4783;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4784;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4785;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4786;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4787;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4788;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4789;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4790;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4791;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4792;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4793;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4794;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4795;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4796;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4797;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4798;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4799;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4800;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4801;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4802;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4803;
  return 4755;
}
