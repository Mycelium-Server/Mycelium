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


#include "scaffolding_block.h"

ScaffoldingBlock::ScaffoldingBlock() = default;
ScaffoldingBlock::~ScaffoldingBlock() = default;

short ScaffoldingBlock::getId() const {
  if (bottom == BOTTOM_TRUE && distance == DISTANCE_0 && waterlogged == WATERLOGGED_TRUE) return 15960;
  if (bottom == BOTTOM_TRUE && distance == DISTANCE_0 && waterlogged == WATERLOGGED_FALSE) return 15961;
  if (bottom == BOTTOM_TRUE && distance == DISTANCE_1 && waterlogged == WATERLOGGED_TRUE) return 15962;
  if (bottom == BOTTOM_TRUE && distance == DISTANCE_1 && waterlogged == WATERLOGGED_FALSE) return 15963;
  if (bottom == BOTTOM_TRUE && distance == DISTANCE_2 && waterlogged == WATERLOGGED_TRUE) return 15964;
  if (bottom == BOTTOM_TRUE && distance == DISTANCE_2 && waterlogged == WATERLOGGED_FALSE) return 15965;
  if (bottom == BOTTOM_TRUE && distance == DISTANCE_3 && waterlogged == WATERLOGGED_TRUE) return 15966;
  if (bottom == BOTTOM_TRUE && distance == DISTANCE_3 && waterlogged == WATERLOGGED_FALSE) return 15967;
  if (bottom == BOTTOM_TRUE && distance == DISTANCE_4 && waterlogged == WATERLOGGED_TRUE) return 15968;
  if (bottom == BOTTOM_TRUE && distance == DISTANCE_4 && waterlogged == WATERLOGGED_FALSE) return 15969;
  if (bottom == BOTTOM_TRUE && distance == DISTANCE_5 && waterlogged == WATERLOGGED_TRUE) return 15970;
  if (bottom == BOTTOM_TRUE && distance == DISTANCE_5 && waterlogged == WATERLOGGED_FALSE) return 15971;
  if (bottom == BOTTOM_TRUE && distance == DISTANCE_6 && waterlogged == WATERLOGGED_TRUE) return 15972;
  if (bottom == BOTTOM_TRUE && distance == DISTANCE_6 && waterlogged == WATERLOGGED_FALSE) return 15973;
  if (bottom == BOTTOM_TRUE && distance == DISTANCE_7 && waterlogged == WATERLOGGED_TRUE) return 15974;
  if (bottom == BOTTOM_TRUE && distance == DISTANCE_7 && waterlogged == WATERLOGGED_FALSE) return 15975;
  if (bottom == BOTTOM_FALSE && distance == DISTANCE_0 && waterlogged == WATERLOGGED_TRUE) return 15976;
  if (bottom == BOTTOM_FALSE && distance == DISTANCE_0 && waterlogged == WATERLOGGED_FALSE) return 15977;
  if (bottom == BOTTOM_FALSE && distance == DISTANCE_1 && waterlogged == WATERLOGGED_TRUE) return 15978;
  if (bottom == BOTTOM_FALSE && distance == DISTANCE_1 && waterlogged == WATERLOGGED_FALSE) return 15979;
  if (bottom == BOTTOM_FALSE && distance == DISTANCE_2 && waterlogged == WATERLOGGED_TRUE) return 15980;
  if (bottom == BOTTOM_FALSE && distance == DISTANCE_2 && waterlogged == WATERLOGGED_FALSE) return 15981;
  if (bottom == BOTTOM_FALSE && distance == DISTANCE_3 && waterlogged == WATERLOGGED_TRUE) return 15982;
  if (bottom == BOTTOM_FALSE && distance == DISTANCE_3 && waterlogged == WATERLOGGED_FALSE) return 15983;
  if (bottom == BOTTOM_FALSE && distance == DISTANCE_4 && waterlogged == WATERLOGGED_TRUE) return 15984;
  if (bottom == BOTTOM_FALSE && distance == DISTANCE_4 && waterlogged == WATERLOGGED_FALSE) return 15985;
  if (bottom == BOTTOM_FALSE && distance == DISTANCE_5 && waterlogged == WATERLOGGED_TRUE) return 15986;
  if (bottom == BOTTOM_FALSE && distance == DISTANCE_5 && waterlogged == WATERLOGGED_FALSE) return 15987;
  if (bottom == BOTTOM_FALSE && distance == DISTANCE_6 && waterlogged == WATERLOGGED_TRUE) return 15988;
  if (bottom == BOTTOM_FALSE && distance == DISTANCE_6 && waterlogged == WATERLOGGED_FALSE) return 15989;
  if (bottom == BOTTOM_FALSE && distance == DISTANCE_7 && waterlogged == WATERLOGGED_TRUE) return 15990;
  if (bottom == BOTTOM_FALSE && distance == DISTANCE_7 && waterlogged == WATERLOGGED_FALSE) return 15991;
  return 15991;
}

std::shared_ptr<Block> ScaffoldingBlock::clone() const {
  std::shared_ptr<ScaffoldingBlock> copy = std::make_shared<ScaffoldingBlock>();
  copy->bottom = bottom;
  copy->distance = distance;
  copy->waterlogged = waterlogged;
  return copy;
}
