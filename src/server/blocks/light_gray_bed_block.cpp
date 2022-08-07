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

#include "light_gray_bed_block.h"

LightGrayBedBlock::LightGrayBedBlock() = default;
LightGrayBedBlock::~LightGrayBedBlock() = default;

short LightGrayBedBlock::getId() const {
  if (facing == FACING_NORTH && occupied == OCCUPIED_TRUE && part == PART_HEAD) return 1407;
  if (facing == FACING_NORTH && occupied == OCCUPIED_TRUE && part == PART_FOOT) return 1408;
  if (facing == FACING_NORTH && occupied == OCCUPIED_FALSE && part == PART_HEAD) return 1409;
  if (facing == FACING_NORTH && occupied == OCCUPIED_FALSE && part == PART_FOOT) return 1410;
  if (facing == FACING_SOUTH && occupied == OCCUPIED_TRUE && part == PART_HEAD) return 1411;
  if (facing == FACING_SOUTH && occupied == OCCUPIED_TRUE && part == PART_FOOT) return 1412;
  if (facing == FACING_SOUTH && occupied == OCCUPIED_FALSE && part == PART_HEAD) return 1413;
  if (facing == FACING_SOUTH && occupied == OCCUPIED_FALSE && part == PART_FOOT) return 1414;
  if (facing == FACING_WEST && occupied == OCCUPIED_TRUE && part == PART_HEAD) return 1415;
  if (facing == FACING_WEST && occupied == OCCUPIED_TRUE && part == PART_FOOT) return 1416;
  if (facing == FACING_WEST && occupied == OCCUPIED_FALSE && part == PART_HEAD) return 1417;
  if (facing == FACING_WEST && occupied == OCCUPIED_FALSE && part == PART_FOOT) return 1418;
  if (facing == FACING_EAST && occupied == OCCUPIED_TRUE && part == PART_HEAD) return 1419;
  if (facing == FACING_EAST && occupied == OCCUPIED_TRUE && part == PART_FOOT) return 1420;
  if (facing == FACING_EAST && occupied == OCCUPIED_FALSE && part == PART_HEAD) return 1421;
  if (facing == FACING_EAST && occupied == OCCUPIED_FALSE && part == PART_FOOT) return 1422;
  return 1410;
}
