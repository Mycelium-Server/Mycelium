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


#include "observer_block.h"

ObserverBlock::ObserverBlock() = default;
ObserverBlock::~ObserverBlock() = default;

short ObserverBlock::getId() const {
  if (facing == FACING_NORTH && powered == POWERED_TRUE) return 10141;
  if (facing == FACING_NORTH && powered == POWERED_FALSE) return 10142;
  if (facing == FACING_EAST && powered == POWERED_TRUE) return 10143;
  if (facing == FACING_EAST && powered == POWERED_FALSE) return 10144;
  if (facing == FACING_SOUTH && powered == POWERED_TRUE) return 10145;
  if (facing == FACING_SOUTH && powered == POWERED_FALSE) return 10146;
  if (facing == FACING_WEST && powered == POWERED_TRUE) return 10147;
  if (facing == FACING_WEST && powered == POWERED_FALSE) return 10148;
  if (facing == FACING_UP && powered == POWERED_TRUE) return 10149;
  if (facing == FACING_UP && powered == POWERED_FALSE) return 10150;
  if (facing == FACING_DOWN && powered == POWERED_TRUE) return 10151;
  if (facing == FACING_DOWN && powered == POWERED_FALSE) return 10152;
  return 10146;
}

std::shared_ptr<Block> ObserverBlock::clone() const {
  std::shared_ptr<ObserverBlock> copy = std::make_shared<ObserverBlock>();
  copy->facing = facing;
  copy->powered = powered;
  return copy;
}
