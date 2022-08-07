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

#include "magenta_bed_block.h"

MagentaBedBlock::MagentaBedBlock() = default;
MagentaBedBlock::~MagentaBedBlock() = default;

short MagentaBedBlock::getId() const {
  if (facing == FACING_NORTH && occupied == OCCUPIED_TRUE && part == PART_HEAD) return 1311;
  if (facing == FACING_NORTH && occupied == OCCUPIED_TRUE && part == PART_FOOT) return 1312;
  if (facing == FACING_NORTH && occupied == OCCUPIED_FALSE && part == PART_HEAD) return 1313;
  if (facing == FACING_NORTH && occupied == OCCUPIED_FALSE && part == PART_FOOT) return 1314;
  if (facing == FACING_SOUTH && occupied == OCCUPIED_TRUE && part == PART_HEAD) return 1315;
  if (facing == FACING_SOUTH && occupied == OCCUPIED_TRUE && part == PART_FOOT) return 1316;
  if (facing == FACING_SOUTH && occupied == OCCUPIED_FALSE && part == PART_HEAD) return 1317;
  if (facing == FACING_SOUTH && occupied == OCCUPIED_FALSE && part == PART_FOOT) return 1318;
  if (facing == FACING_WEST && occupied == OCCUPIED_TRUE && part == PART_HEAD) return 1319;
  if (facing == FACING_WEST && occupied == OCCUPIED_TRUE && part == PART_FOOT) return 1320;
  if (facing == FACING_WEST && occupied == OCCUPIED_FALSE && part == PART_HEAD) return 1321;
  if (facing == FACING_WEST && occupied == OCCUPIED_FALSE && part == PART_FOOT) return 1322;
  if (facing == FACING_EAST && occupied == OCCUPIED_TRUE && part == PART_HEAD) return 1323;
  if (facing == FACING_EAST && occupied == OCCUPIED_TRUE && part == PART_FOOT) return 1324;
  if (facing == FACING_EAST && occupied == OCCUPIED_FALSE && part == PART_HEAD) return 1325;
  if (facing == FACING_EAST && occupied == OCCUPIED_FALSE && part == PART_FOOT) return 1326;
  return 1314;
}
