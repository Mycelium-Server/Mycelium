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

#include "orange_stained_glass_pane_block.h"

OrangeStainedGlassPaneBlock::OrangeStainedGlassPaneBlock() = default;
OrangeStainedGlassPaneBlock::~OrangeStainedGlassPaneBlock() = default;

short OrangeStainedGlassPaneBlock::getId() const {
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7524;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7525;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7526;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7527;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7528;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7529;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7530;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7531;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7532;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7533;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7534;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7535;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7536;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7537;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7538;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7539;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7540;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7541;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7542;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7543;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7544;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7545;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7546;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7547;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7548;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7549;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7550;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7551;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7552;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7553;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7554;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7555;
  return 7555;
}
