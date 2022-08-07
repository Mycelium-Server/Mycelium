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

#include "glass_pane_block.h"

GlassPaneBlock::GlassPaneBlock() = default;
GlassPaneBlock::~GlassPaneBlock() = default;

short GlassPaneBlock::getId() const {
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5110;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5111;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5112;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5113;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5114;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5115;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5116;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5117;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5118;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5119;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5120;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5121;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5122;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5123;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5124;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5125;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5126;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5127;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5128;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5129;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5130;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5131;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5132;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5133;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5134;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5135;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5136;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5137;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5138;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5139;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5140;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5141;
  return 5141;
}
