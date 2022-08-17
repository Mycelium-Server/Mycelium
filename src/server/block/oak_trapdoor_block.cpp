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


#include "oak_trapdoor_block.h"

OakTrapdoorBlock::OakTrapdoorBlock() = default;
OakTrapdoorBlock::~OakTrapdoorBlock() = default;

short OakTrapdoorBlock::getId() const {
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4420;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4421;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4422;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4423;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4424;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4425;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4426;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4427;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4428;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4429;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4430;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4431;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4432;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4433;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4434;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4435;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4436;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4437;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4438;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4439;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4440;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4441;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4442;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4443;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4444;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4445;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4446;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4447;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4448;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4449;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4450;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4451;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4452;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4453;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4454;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4455;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4456;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4457;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4458;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4459;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4460;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4461;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4462;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4463;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4464;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4465;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4466;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4467;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4468;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4469;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4470;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4471;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4472;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4473;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4474;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4475;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4476;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4477;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4478;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4479;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4480;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4481;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4482;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4483;
  return 4435;
}

std::shared_ptr<Block> OakTrapdoorBlock::clone() const {
  std::shared_ptr<OakTrapdoorBlock> copy = std::make_shared<OakTrapdoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->open = open;
  copy->powered = powered;
  copy->waterlogged = waterlogged;
  return copy;
}
