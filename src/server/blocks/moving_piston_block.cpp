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

#include "moving_piston_block.h"

MovingPistonBlock::MovingPistonBlock() = default;
MovingPistonBlock::~MovingPistonBlock() = default;

short MovingPistonBlock::getId() const {
  if (type == TYPE_NORMAL && facing == FACING_NORTH) return 1654;
  if (type == TYPE_STICKY && facing == FACING_NORTH) return 1655;
  if (type == TYPE_NORMAL && facing == FACING_EAST) return 1656;
  if (type == TYPE_STICKY && facing == FACING_EAST) return 1657;
  if (type == TYPE_NORMAL && facing == FACING_SOUTH) return 1658;
  if (type == TYPE_STICKY && facing == FACING_SOUTH) return 1659;
  if (type == TYPE_NORMAL && facing == FACING_WEST) return 1660;
  if (type == TYPE_STICKY && facing == FACING_WEST) return 1661;
  if (type == TYPE_NORMAL && facing == FACING_UP) return 1662;
  if (type == TYPE_STICKY && facing == FACING_UP) return 1663;
  if (type == TYPE_NORMAL && facing == FACING_DOWN) return 1664;
  if (type == TYPE_STICKY && facing == FACING_DOWN) return 1665;
  return 1654;
}
