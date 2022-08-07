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

#include "purple_bed_block.h"

PurpleBedBlock::PurpleBedBlock() = default;
PurpleBedBlock::~PurpleBedBlock() = default;

short PurpleBedBlock::getId() const {
  if (facing == FACING_NORTH && occupied == OCCUPIED_TRUE && part == PART_HEAD) return 1439;
  if (facing == FACING_NORTH && occupied == OCCUPIED_TRUE && part == PART_FOOT) return 1440;
  if (facing == FACING_NORTH && occupied == OCCUPIED_FALSE && part == PART_HEAD) return 1441;
  if (facing == FACING_NORTH && occupied == OCCUPIED_FALSE && part == PART_FOOT) return 1442;
  if (facing == FACING_SOUTH && occupied == OCCUPIED_TRUE && part == PART_HEAD) return 1443;
  if (facing == FACING_SOUTH && occupied == OCCUPIED_TRUE && part == PART_FOOT) return 1444;
  if (facing == FACING_SOUTH && occupied == OCCUPIED_FALSE && part == PART_HEAD) return 1445;
  if (facing == FACING_SOUTH && occupied == OCCUPIED_FALSE && part == PART_FOOT) return 1446;
  if (facing == FACING_WEST && occupied == OCCUPIED_TRUE && part == PART_HEAD) return 1447;
  if (facing == FACING_WEST && occupied == OCCUPIED_TRUE && part == PART_FOOT) return 1448;
  if (facing == FACING_WEST && occupied == OCCUPIED_FALSE && part == PART_HEAD) return 1449;
  if (facing == FACING_WEST && occupied == OCCUPIED_FALSE && part == PART_FOOT) return 1450;
  if (facing == FACING_EAST && occupied == OCCUPIED_TRUE && part == PART_HEAD) return 1451;
  if (facing == FACING_EAST && occupied == OCCUPIED_TRUE && part == PART_FOOT) return 1452;
  if (facing == FACING_EAST && occupied == OCCUPIED_FALSE && part == PART_HEAD) return 1453;
  if (facing == FACING_EAST && occupied == OCCUPIED_FALSE && part == PART_FOOT) return 1454;
  return 1442;
}
