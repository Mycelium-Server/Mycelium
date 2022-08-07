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

#include "light_gray_stained_glass_pane_block.h"

LightGrayStainedGlassPaneBlock::LightGrayStainedGlassPaneBlock() = default;
LightGrayStainedGlassPaneBlock::~LightGrayStainedGlassPaneBlock() = default;

short LightGrayStainedGlassPaneBlock::getId() const {
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7748;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7749;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7750;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7751;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7752;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7753;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7754;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7755;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7756;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7757;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7758;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7759;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7760;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7761;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7762;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7763;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7764;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7765;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7766;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7767;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7768;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7769;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7770;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7771;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7772;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7773;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7774;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7775;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 7776;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 7777;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 7778;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 7779;
  return 7779;
}
