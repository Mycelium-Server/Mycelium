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

#include "green_stained_glass_pane_block.h"

GreenStainedGlassPaneBlock::GreenStainedGlassPaneBlock() = default;
GreenStainedGlassPaneBlock::~GreenStainedGlassPaneBlock() = default;

short GreenStainedGlassPaneBlock::getId() const {
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7908;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7909;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7910;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7911;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7912;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7913;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7914;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7915;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7916;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7917;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7918;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7919;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7920;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7921;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7922;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7923;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7924;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7925;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7926;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7927;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7928;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7929;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7930;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7931;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7932;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7933;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7934;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7935;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7936;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7937;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7938;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7939;
  return 7939;
}
