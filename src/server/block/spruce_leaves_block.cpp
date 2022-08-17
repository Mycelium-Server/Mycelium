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


#include "spruce_leaves_block.h"

SpruceLeavesBlock::SpruceLeavesBlock() = default;
SpruceLeavesBlock::~SpruceLeavesBlock() = default;

short SpruceLeavesBlock::getId() const {
  if (distance == DISTANCE_1 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 234;
  if (distance == DISTANCE_1 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 235;
  if (distance == DISTANCE_1 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 236;
  if (distance == DISTANCE_1 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 237;
  if (distance == DISTANCE_2 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 238;
  if (distance == DISTANCE_2 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 239;
  if (distance == DISTANCE_2 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 240;
  if (distance == DISTANCE_2 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 241;
  if (distance == DISTANCE_3 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 242;
  if (distance == DISTANCE_3 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 243;
  if (distance == DISTANCE_3 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 244;
  if (distance == DISTANCE_3 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 245;
  if (distance == DISTANCE_4 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 246;
  if (distance == DISTANCE_4 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 247;
  if (distance == DISTANCE_4 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 248;
  if (distance == DISTANCE_4 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 249;
  if (distance == DISTANCE_5 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 250;
  if (distance == DISTANCE_5 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 251;
  if (distance == DISTANCE_5 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 252;
  if (distance == DISTANCE_5 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 253;
  if (distance == DISTANCE_6 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 254;
  if (distance == DISTANCE_6 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 255;
  if (distance == DISTANCE_6 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 256;
  if (distance == DISTANCE_6 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 257;
  if (distance == DISTANCE_7 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 258;
  if (distance == DISTANCE_7 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 259;
  if (distance == DISTANCE_7 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 260;
  if (distance == DISTANCE_7 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 261;
  return 261;
}

std::shared_ptr<Block> SpruceLeavesBlock::clone() const {
  std::shared_ptr<SpruceLeavesBlock> copy = std::make_shared<SpruceLeavesBlock>();
  copy->distance = distance;
  copy->persistent = persistent;
  copy->waterlogged = waterlogged;
  return copy;
}
