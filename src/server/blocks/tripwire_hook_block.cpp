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

#include "tripwire_hook_block.h"

TripwireHookBlock::TripwireHookBlock() = default;
TripwireHookBlock::~TripwireHookBlock() = default;

short TripwireHookBlock::getId() const {
  if (attached == ATTACHED_TRUE && facing == FACING_NORTH && powered == POWERED_TRUE) return 5851;
  if (attached == ATTACHED_TRUE && facing == FACING_NORTH && powered == POWERED_FALSE) return 5852;
  if (attached == ATTACHED_TRUE && facing == FACING_SOUTH && powered == POWERED_TRUE) return 5853;
  if (attached == ATTACHED_TRUE && facing == FACING_SOUTH && powered == POWERED_FALSE) return 5854;
  if (attached == ATTACHED_TRUE && facing == FACING_WEST && powered == POWERED_TRUE) return 5855;
  if (attached == ATTACHED_TRUE && facing == FACING_WEST && powered == POWERED_FALSE) return 5856;
  if (attached == ATTACHED_TRUE && facing == FACING_EAST && powered == POWERED_TRUE) return 5857;
  if (attached == ATTACHED_TRUE && facing == FACING_EAST && powered == POWERED_FALSE) return 5858;
  if (attached == ATTACHED_FALSE && facing == FACING_NORTH && powered == POWERED_TRUE) return 5859;
  if (attached == ATTACHED_FALSE && facing == FACING_NORTH && powered == POWERED_FALSE) return 5860;
  if (attached == ATTACHED_FALSE && facing == FACING_SOUTH && powered == POWERED_TRUE) return 5861;
  if (attached == ATTACHED_FALSE && facing == FACING_SOUTH && powered == POWERED_FALSE) return 5862;
  if (attached == ATTACHED_FALSE && facing == FACING_WEST && powered == POWERED_TRUE) return 5863;
  if (attached == ATTACHED_FALSE && facing == FACING_WEST && powered == POWERED_FALSE) return 5864;
  if (attached == ATTACHED_FALSE && facing == FACING_EAST && powered == POWERED_TRUE) return 5865;
  if (attached == ATTACHED_FALSE && facing == FACING_EAST && powered == POWERED_FALSE) return 5866;
  return 5860;
}
