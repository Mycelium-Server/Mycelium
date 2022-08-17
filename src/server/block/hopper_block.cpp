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


#include "hopper_block.h"

HopperBlock::HopperBlock() = default;
HopperBlock::~HopperBlock() = default;

short HopperBlock::getId() const {
  if (enabled == ENABLED_TRUE && facing == FACING_DOWN) return 7345;
  if (enabled == ENABLED_TRUE && facing == FACING_NORTH) return 7346;
  if (enabled == ENABLED_TRUE && facing == FACING_SOUTH) return 7347;
  if (enabled == ENABLED_TRUE && facing == FACING_WEST) return 7348;
  if (enabled == ENABLED_TRUE && facing == FACING_EAST) return 7349;
  if (enabled == ENABLED_FALSE && facing == FACING_DOWN) return 7350;
  if (enabled == ENABLED_FALSE && facing == FACING_NORTH) return 7351;
  if (enabled == ENABLED_FALSE && facing == FACING_SOUTH) return 7352;
  if (enabled == ENABLED_FALSE && facing == FACING_WEST) return 7353;
  if (enabled == ENABLED_FALSE && facing == FACING_EAST) return 7354;
  return 7345;
}

std::shared_ptr<Block> HopperBlock::clone() const {
  std::shared_ptr<HopperBlock> copy = std::make_shared<HopperBlock>();
  copy->enabled = enabled;
  copy->facing = facing;
  return copy;
}
