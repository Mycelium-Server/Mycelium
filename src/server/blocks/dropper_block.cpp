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

#include "dropper_block.h"

DropperBlock::DropperBlock() = default;
DropperBlock::~DropperBlock() = default;

short DropperBlock::getId() const {
  if (facing == FACING_NORTH && triggered == TRIGGERED_TRUE) return 7464;
  if (facing == FACING_NORTH && triggered == TRIGGERED_FALSE) return 7465;
  if (facing == FACING_EAST && triggered == TRIGGERED_TRUE) return 7466;
  if (facing == FACING_EAST && triggered == TRIGGERED_FALSE) return 7467;
  if (facing == FACING_SOUTH && triggered == TRIGGERED_TRUE) return 7468;
  if (facing == FACING_SOUTH && triggered == TRIGGERED_FALSE) return 7469;
  if (facing == FACING_WEST && triggered == TRIGGERED_TRUE) return 7470;
  if (facing == FACING_WEST && triggered == TRIGGERED_FALSE) return 7471;
  if (facing == FACING_UP && triggered == TRIGGERED_TRUE) return 7472;
  if (facing == FACING_UP && triggered == TRIGGERED_FALSE) return 7473;
  if (facing == FACING_DOWN && triggered == TRIGGERED_TRUE) return 7474;
  if (facing == FACING_DOWN && triggered == TRIGGERED_FALSE) return 7475;
  return 7465;
}
