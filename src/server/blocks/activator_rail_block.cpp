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

#include "activator_rail_block.h"

ActivatorRailBlock::ActivatorRailBlock() = default;
ActivatorRailBlock::~ActivatorRailBlock() = default;

short ActivatorRailBlock::getId() const {
  if (powered == POWERED_TRUE && shape == SHAPE_NORTH_SOUTH && waterlogged == WATERLOGGED_TRUE) return 7440;
  if (powered == POWERED_TRUE && shape == SHAPE_NORTH_SOUTH && waterlogged == WATERLOGGED_FALSE) return 7441;
  if (powered == POWERED_TRUE && shape == SHAPE_EAST_WEST && waterlogged == WATERLOGGED_TRUE) return 7442;
  if (powered == POWERED_TRUE && shape == SHAPE_EAST_WEST && waterlogged == WATERLOGGED_FALSE) return 7443;
  if (powered == POWERED_TRUE && shape == SHAPE_ASCENDING_EAST && waterlogged == WATERLOGGED_TRUE) return 7444;
  if (powered == POWERED_TRUE && shape == SHAPE_ASCENDING_EAST && waterlogged == WATERLOGGED_FALSE) return 7445;
  if (powered == POWERED_TRUE && shape == SHAPE_ASCENDING_WEST && waterlogged == WATERLOGGED_TRUE) return 7446;
  if (powered == POWERED_TRUE && shape == SHAPE_ASCENDING_WEST && waterlogged == WATERLOGGED_FALSE) return 7447;
  if (powered == POWERED_TRUE && shape == SHAPE_ASCENDING_NORTH && waterlogged == WATERLOGGED_TRUE) return 7448;
  if (powered == POWERED_TRUE && shape == SHAPE_ASCENDING_NORTH && waterlogged == WATERLOGGED_FALSE) return 7449;
  if (powered == POWERED_TRUE && shape == SHAPE_ASCENDING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 7450;
  if (powered == POWERED_TRUE && shape == SHAPE_ASCENDING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 7451;
  if (powered == POWERED_FALSE && shape == SHAPE_NORTH_SOUTH && waterlogged == WATERLOGGED_TRUE) return 7452;
  if (powered == POWERED_FALSE && shape == SHAPE_NORTH_SOUTH && waterlogged == WATERLOGGED_FALSE) return 7453;
  if (powered == POWERED_FALSE && shape == SHAPE_EAST_WEST && waterlogged == WATERLOGGED_TRUE) return 7454;
  if (powered == POWERED_FALSE && shape == SHAPE_EAST_WEST && waterlogged == WATERLOGGED_FALSE) return 7455;
  if (powered == POWERED_FALSE && shape == SHAPE_ASCENDING_EAST && waterlogged == WATERLOGGED_TRUE) return 7456;
  if (powered == POWERED_FALSE && shape == SHAPE_ASCENDING_EAST && waterlogged == WATERLOGGED_FALSE) return 7457;
  if (powered == POWERED_FALSE && shape == SHAPE_ASCENDING_WEST && waterlogged == WATERLOGGED_TRUE) return 7458;
  if (powered == POWERED_FALSE && shape == SHAPE_ASCENDING_WEST && waterlogged == WATERLOGGED_FALSE) return 7459;
  if (powered == POWERED_FALSE && shape == SHAPE_ASCENDING_NORTH && waterlogged == WATERLOGGED_TRUE) return 7460;
  if (powered == POWERED_FALSE && shape == SHAPE_ASCENDING_NORTH && waterlogged == WATERLOGGED_FALSE) return 7461;
  if (powered == POWERED_FALSE && shape == SHAPE_ASCENDING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 7462;
  if (powered == POWERED_FALSE && shape == SHAPE_ASCENDING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 7463;
  return 7453;
}
