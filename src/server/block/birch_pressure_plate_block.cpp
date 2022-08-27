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


#include "birch_pressure_plate_block.h"

BirchPressurePlateBlock::BirchPressurePlateBlock() = default;
BirchPressurePlateBlock::~BirchPressurePlateBlock() = default;

short BirchPressurePlateBlock::getId() const {
  if (powered == POWERED_TRUE) return 4182;
  if (powered == POWERED_FALSE) return 4183;
  return 4183;
}

std::shared_ptr<Block> BirchPressurePlateBlock::clone() const {
  std::shared_ptr<BirchPressurePlateBlock> copy = std::make_shared<BirchPressurePlateBlock>();
  copy->powered = powered;
  return copy;
}