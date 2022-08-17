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


#include "piston_block.h"

PistonBlock::PistonBlock() = default;
PistonBlock::~PistonBlock() = default;

short PistonBlock::getId() const {
  if (extended == EXTENDED_TRUE && facing == FACING_NORTH) return 1602;
  if (extended == EXTENDED_TRUE && facing == FACING_EAST) return 1603;
  if (extended == EXTENDED_TRUE && facing == FACING_SOUTH) return 1604;
  if (extended == EXTENDED_TRUE && facing == FACING_WEST) return 1605;
  if (extended == EXTENDED_TRUE && facing == FACING_UP) return 1606;
  if (extended == EXTENDED_TRUE && facing == FACING_DOWN) return 1607;
  if (extended == EXTENDED_FALSE && facing == FACING_NORTH) return 1608;
  if (extended == EXTENDED_FALSE && facing == FACING_EAST) return 1609;
  if (extended == EXTENDED_FALSE && facing == FACING_SOUTH) return 1610;
  if (extended == EXTENDED_FALSE && facing == FACING_WEST) return 1611;
  if (extended == EXTENDED_FALSE && facing == FACING_UP) return 1612;
  if (extended == EXTENDED_FALSE && facing == FACING_DOWN) return 1613;
  return 1608;
}

std::shared_ptr<Block> PistonBlock::clone() const {
  std::shared_ptr<PistonBlock> copy = std::make_shared<PistonBlock>();
  copy->extended = extended;
  copy->facing = facing;
  return copy;
}
