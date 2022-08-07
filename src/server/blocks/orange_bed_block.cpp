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

#include "orange_bed_block.h"

OrangeBedBlock::OrangeBedBlock() = default;
OrangeBedBlock::~OrangeBedBlock() = default;

short OrangeBedBlock::getId() const {
  if (facing == FACING_NORTH && occupied == OCCUPIED_TRUE && part == PART_HEAD) return 1295;
  if (facing == FACING_NORTH && occupied == OCCUPIED_TRUE && part == PART_FOOT) return 1296;
  if (facing == FACING_NORTH && occupied == OCCUPIED_FALSE && part == PART_HEAD) return 1297;
  if (facing == FACING_NORTH && occupied == OCCUPIED_FALSE && part == PART_FOOT) return 1298;
  if (facing == FACING_SOUTH && occupied == OCCUPIED_TRUE && part == PART_HEAD) return 1299;
  if (facing == FACING_SOUTH && occupied == OCCUPIED_TRUE && part == PART_FOOT) return 1300;
  if (facing == FACING_SOUTH && occupied == OCCUPIED_FALSE && part == PART_HEAD) return 1301;
  if (facing == FACING_SOUTH && occupied == OCCUPIED_FALSE && part == PART_FOOT) return 1302;
  if (facing == FACING_WEST && occupied == OCCUPIED_TRUE && part == PART_HEAD) return 1303;
  if (facing == FACING_WEST && occupied == OCCUPIED_TRUE && part == PART_FOOT) return 1304;
  if (facing == FACING_WEST && occupied == OCCUPIED_FALSE && part == PART_HEAD) return 1305;
  if (facing == FACING_WEST && occupied == OCCUPIED_FALSE && part == PART_FOOT) return 1306;
  if (facing == FACING_EAST && occupied == OCCUPIED_TRUE && part == PART_HEAD) return 1307;
  if (facing == FACING_EAST && occupied == OCCUPIED_TRUE && part == PART_FOOT) return 1308;
  if (facing == FACING_EAST && occupied == OCCUPIED_FALSE && part == PART_HEAD) return 1309;
  if (facing == FACING_EAST && occupied == OCCUPIED_FALSE && part == PART_FOOT) return 1310;
  return 1298;
}
