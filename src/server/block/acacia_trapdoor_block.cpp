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


#include "acacia_trapdoor_block.h"

AcaciaTrapdoorBlock::AcaciaTrapdoorBlock() = default;
AcaciaTrapdoorBlock::~AcaciaTrapdoorBlock() = default;

short AcaciaTrapdoorBlock::getId() const {
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4676;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4677;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4678;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4679;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4680;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4681;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4682;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4683;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4684;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4685;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4686;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4687;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4688;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4689;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4690;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4691;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4692;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4693;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4694;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4695;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4696;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4697;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4698;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4699;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4700;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4701;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4702;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4703;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4704;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4705;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4706;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4707;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4708;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4709;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4710;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4711;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4712;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4713;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4714;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4715;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4716;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4717;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4718;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4719;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4720;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4721;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4722;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4723;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4724;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4725;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4726;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4727;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4728;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4729;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4730;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4731;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4732;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4733;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4734;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4735;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4736;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4737;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4738;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4739;
  return 4691;
}

std::shared_ptr<Block> AcaciaTrapdoorBlock::clone() const {
  std::shared_ptr<AcaciaTrapdoorBlock> copy = std::make_shared<AcaciaTrapdoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->open = open;
  copy->powered = powered;
  copy->waterlogged = waterlogged;
  return copy;
}
