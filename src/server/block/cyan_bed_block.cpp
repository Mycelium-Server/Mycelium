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


#include "cyan_bed_block.h"

CyanBedBlock::CyanBedBlock() = default;
CyanBedBlock::~CyanBedBlock() = default;

short CyanBedBlock::getId() const {
  if (facing == FACING_NORTH && occupied == OCCUPIED_TRUE && part == PART_HEAD) return 1423;
  if (facing == FACING_NORTH && occupied == OCCUPIED_TRUE && part == PART_FOOT) return 1424;
  if (facing == FACING_NORTH && occupied == OCCUPIED_FALSE && part == PART_HEAD) return 1425;
  if (facing == FACING_NORTH && occupied == OCCUPIED_FALSE && part == PART_FOOT) return 1426;
  if (facing == FACING_SOUTH && occupied == OCCUPIED_TRUE && part == PART_HEAD) return 1427;
  if (facing == FACING_SOUTH && occupied == OCCUPIED_TRUE && part == PART_FOOT) return 1428;
  if (facing == FACING_SOUTH && occupied == OCCUPIED_FALSE && part == PART_HEAD) return 1429;
  if (facing == FACING_SOUTH && occupied == OCCUPIED_FALSE && part == PART_FOOT) return 1430;
  if (facing == FACING_WEST && occupied == OCCUPIED_TRUE && part == PART_HEAD) return 1431;
  if (facing == FACING_WEST && occupied == OCCUPIED_TRUE && part == PART_FOOT) return 1432;
  if (facing == FACING_WEST && occupied == OCCUPIED_FALSE && part == PART_HEAD) return 1433;
  if (facing == FACING_WEST && occupied == OCCUPIED_FALSE && part == PART_FOOT) return 1434;
  if (facing == FACING_EAST && occupied == OCCUPIED_TRUE && part == PART_HEAD) return 1435;
  if (facing == FACING_EAST && occupied == OCCUPIED_TRUE && part == PART_FOOT) return 1436;
  if (facing == FACING_EAST && occupied == OCCUPIED_FALSE && part == PART_HEAD) return 1437;
  if (facing == FACING_EAST && occupied == OCCUPIED_FALSE && part == PART_FOOT) return 1438;
  return 1426;
}

std::shared_ptr<Block> CyanBedBlock::clone() const {
  std::shared_ptr<CyanBedBlock> copy = std::make_shared<CyanBedBlock>();
  copy->facing = facing;
  copy->occupied = occupied;
  copy->part = part;
  return copy;
}
