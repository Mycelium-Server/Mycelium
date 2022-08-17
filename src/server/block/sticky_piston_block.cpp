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


#include "sticky_piston_block.h"

StickyPistonBlock::StickyPistonBlock() = default;
StickyPistonBlock::~StickyPistonBlock() = default;

short StickyPistonBlock::getId() const {
  if (extended == EXTENDED_TRUE && facing == FACING_NORTH) return 1583;
  if (extended == EXTENDED_TRUE && facing == FACING_EAST) return 1584;
  if (extended == EXTENDED_TRUE && facing == FACING_SOUTH) return 1585;
  if (extended == EXTENDED_TRUE && facing == FACING_WEST) return 1586;
  if (extended == EXTENDED_TRUE && facing == FACING_UP) return 1587;
  if (extended == EXTENDED_TRUE && facing == FACING_DOWN) return 1588;
  if (extended == EXTENDED_FALSE && facing == FACING_NORTH) return 1589;
  if (extended == EXTENDED_FALSE && facing == FACING_EAST) return 1590;
  if (extended == EXTENDED_FALSE && facing == FACING_SOUTH) return 1591;
  if (extended == EXTENDED_FALSE && facing == FACING_WEST) return 1592;
  if (extended == EXTENDED_FALSE && facing == FACING_UP) return 1593;
  if (extended == EXTENDED_FALSE && facing == FACING_DOWN) return 1594;
  return 1589;
}

std::shared_ptr<Block> StickyPistonBlock::clone() const {
  std::shared_ptr<StickyPistonBlock> copy = std::make_shared<StickyPistonBlock>();
  copy->extended = extended;
  copy->facing = facing;
  return copy;
}
