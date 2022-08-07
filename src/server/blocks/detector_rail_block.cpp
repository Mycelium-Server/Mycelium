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

#include "detector_rail_block.h"

DetectorRailBlock::DetectorRailBlock() = default;
DetectorRailBlock::~DetectorRailBlock() = default;

short DetectorRailBlock::getId() const {
  if (powered == POWERED_TRUE && shape == SHAPE_NORTH_SOUTH && waterlogged == WATERLOGGED_TRUE) return 1559;
  if (powered == POWERED_TRUE && shape == SHAPE_NORTH_SOUTH && waterlogged == WATERLOGGED_FALSE) return 1560;
  if (powered == POWERED_TRUE && shape == SHAPE_EAST_WEST && waterlogged == WATERLOGGED_TRUE) return 1561;
  if (powered == POWERED_TRUE && shape == SHAPE_EAST_WEST && waterlogged == WATERLOGGED_FALSE) return 1562;
  if (powered == POWERED_TRUE && shape == SHAPE_ASCENDING_EAST && waterlogged == WATERLOGGED_TRUE) return 1563;
  if (powered == POWERED_TRUE && shape == SHAPE_ASCENDING_EAST && waterlogged == WATERLOGGED_FALSE) return 1564;
  if (powered == POWERED_TRUE && shape == SHAPE_ASCENDING_WEST && waterlogged == WATERLOGGED_TRUE) return 1565;
  if (powered == POWERED_TRUE && shape == SHAPE_ASCENDING_WEST && waterlogged == WATERLOGGED_FALSE) return 1566;
  if (powered == POWERED_TRUE && shape == SHAPE_ASCENDING_NORTH && waterlogged == WATERLOGGED_TRUE) return 1567;
  if (powered == POWERED_TRUE && shape == SHAPE_ASCENDING_NORTH && waterlogged == WATERLOGGED_FALSE) return 1568;
  if (powered == POWERED_TRUE && shape == SHAPE_ASCENDING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 1569;
  if (powered == POWERED_TRUE && shape == SHAPE_ASCENDING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 1570;
  if (powered == POWERED_FALSE && shape == SHAPE_NORTH_SOUTH && waterlogged == WATERLOGGED_TRUE) return 1571;
  if (powered == POWERED_FALSE && shape == SHAPE_NORTH_SOUTH && waterlogged == WATERLOGGED_FALSE) return 1572;
  if (powered == POWERED_FALSE && shape == SHAPE_EAST_WEST && waterlogged == WATERLOGGED_TRUE) return 1573;
  if (powered == POWERED_FALSE && shape == SHAPE_EAST_WEST && waterlogged == WATERLOGGED_FALSE) return 1574;
  if (powered == POWERED_FALSE && shape == SHAPE_ASCENDING_EAST && waterlogged == WATERLOGGED_TRUE) return 1575;
  if (powered == POWERED_FALSE && shape == SHAPE_ASCENDING_EAST && waterlogged == WATERLOGGED_FALSE) return 1576;
  if (powered == POWERED_FALSE && shape == SHAPE_ASCENDING_WEST && waterlogged == WATERLOGGED_TRUE) return 1577;
  if (powered == POWERED_FALSE && shape == SHAPE_ASCENDING_WEST && waterlogged == WATERLOGGED_FALSE) return 1578;
  if (powered == POWERED_FALSE && shape == SHAPE_ASCENDING_NORTH && waterlogged == WATERLOGGED_TRUE) return 1579;
  if (powered == POWERED_FALSE && shape == SHAPE_ASCENDING_NORTH && waterlogged == WATERLOGGED_FALSE) return 1580;
  if (powered == POWERED_FALSE && shape == SHAPE_ASCENDING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 1581;
  if (powered == POWERED_FALSE && shape == SHAPE_ASCENDING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 1582;
  return 1572;
}
