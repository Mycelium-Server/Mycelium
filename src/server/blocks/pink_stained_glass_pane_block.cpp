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

#include "pink_stained_glass_pane_block.h"

PinkStainedGlassPaneBlock::PinkStainedGlassPaneBlock() = default;
PinkStainedGlassPaneBlock::~PinkStainedGlassPaneBlock() = default;

short PinkStainedGlassPaneBlock::getId() const {
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7684;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7685;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7686;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7687;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7688;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7689;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7690;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7691;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7692;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7693;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7694;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7695;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7696;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7697;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7698;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7699;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7700;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7701;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7702;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7703;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7704;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7705;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7706;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7707;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7708;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7709;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7710;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7711;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7712;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7713;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7714;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7715;
  return 7715;
}
