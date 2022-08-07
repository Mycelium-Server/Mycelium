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

#include "piston_head_block.h"

PistonHeadBlock::PistonHeadBlock() = default;
PistonHeadBlock::~PistonHeadBlock() = default;

short PistonHeadBlock::getId() const {
  if (type == TYPE_NORMAL && facing == FACING_NORTH && isShort == SHORT_TRUE) return 1614;
  if (type == TYPE_STICKY && facing == FACING_NORTH && isShort == SHORT_TRUE) return 1615;
  if (type == TYPE_NORMAL && facing == FACING_NORTH && isShort == SHORT_FALSE) return 1616;
  if (type == TYPE_STICKY && facing == FACING_NORTH && isShort == SHORT_FALSE) return 1617;
  if (type == TYPE_NORMAL && facing == FACING_EAST && isShort == SHORT_TRUE) return 1618;
  if (type == TYPE_STICKY && facing == FACING_EAST && isShort == SHORT_TRUE) return 1619;
  if (type == TYPE_NORMAL && facing == FACING_EAST && isShort == SHORT_FALSE) return 1620;
  if (type == TYPE_STICKY && facing == FACING_EAST && isShort == SHORT_FALSE) return 1621;
  if (type == TYPE_NORMAL && facing == FACING_SOUTH && isShort == SHORT_TRUE) return 1622;
  if (type == TYPE_STICKY && facing == FACING_SOUTH && isShort == SHORT_TRUE) return 1623;
  if (type == TYPE_NORMAL && facing == FACING_SOUTH && isShort == SHORT_FALSE) return 1624;
  if (type == TYPE_STICKY && facing == FACING_SOUTH && isShort == SHORT_FALSE) return 1625;
  if (type == TYPE_NORMAL && facing == FACING_WEST && isShort == SHORT_TRUE) return 1626;
  if (type == TYPE_STICKY && facing == FACING_WEST && isShort == SHORT_TRUE) return 1627;
  if (type == TYPE_NORMAL && facing == FACING_WEST && isShort == SHORT_FALSE) return 1628;
  if (type == TYPE_STICKY && facing == FACING_WEST && isShort == SHORT_FALSE) return 1629;
  if (type == TYPE_NORMAL && facing == FACING_UP && isShort == SHORT_TRUE) return 1630;
  if (type == TYPE_STICKY && facing == FACING_UP && isShort == SHORT_TRUE) return 1631;
  if (type == TYPE_NORMAL && facing == FACING_UP && isShort == SHORT_FALSE) return 1632;
  if (type == TYPE_STICKY && facing == FACING_UP && isShort == SHORT_FALSE) return 1633;
  if (type == TYPE_NORMAL && facing == FACING_DOWN && isShort == SHORT_TRUE) return 1634;
  if (type == TYPE_STICKY && facing == FACING_DOWN && isShort == SHORT_TRUE) return 1635;
  if (type == TYPE_NORMAL && facing == FACING_DOWN && isShort == SHORT_FALSE) return 1636;
  if (type == TYPE_STICKY && facing == FACING_DOWN && isShort == SHORT_FALSE) return 1637;
  return 1616;
}
