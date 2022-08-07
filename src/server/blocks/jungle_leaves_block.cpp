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

#include "jungle_leaves_block.h"

JungleLeavesBlock::JungleLeavesBlock() = default;
JungleLeavesBlock::~JungleLeavesBlock() = default;

short JungleLeavesBlock::getId() const {
  if (distance == DISTANCE_1 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 290;
  if (distance == DISTANCE_1 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 291;
  if (distance == DISTANCE_1 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 292;
  if (distance == DISTANCE_1 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 293;
  if (distance == DISTANCE_2 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 294;
  if (distance == DISTANCE_2 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 295;
  if (distance == DISTANCE_2 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 296;
  if (distance == DISTANCE_2 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 297;
  if (distance == DISTANCE_3 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 298;
  if (distance == DISTANCE_3 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 299;
  if (distance == DISTANCE_3 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 300;
  if (distance == DISTANCE_3 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 301;
  if (distance == DISTANCE_4 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 302;
  if (distance == DISTANCE_4 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 303;
  if (distance == DISTANCE_4 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 304;
  if (distance == DISTANCE_4 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 305;
  if (distance == DISTANCE_5 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 306;
  if (distance == DISTANCE_5 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 307;
  if (distance == DISTANCE_5 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 308;
  if (distance == DISTANCE_5 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 309;
  if (distance == DISTANCE_6 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 310;
  if (distance == DISTANCE_6 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 311;
  if (distance == DISTANCE_6 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 312;
  if (distance == DISTANCE_6 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 313;
  if (distance == DISTANCE_7 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 314;
  if (distance == DISTANCE_7 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 315;
  if (distance == DISTANCE_7 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 316;
  if (distance == DISTANCE_7 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 317;
  return 317;
}
