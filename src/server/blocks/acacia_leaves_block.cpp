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

#include "acacia_leaves_block.h"

AcaciaLeavesBlock::AcaciaLeavesBlock() = default;
AcaciaLeavesBlock::~AcaciaLeavesBlock() = default;

short AcaciaLeavesBlock::getId() const {
  if (distance == DISTANCE_1 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 318;
  if (distance == DISTANCE_1 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 319;
  if (distance == DISTANCE_1 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 320;
  if (distance == DISTANCE_1 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 321;
  if (distance == DISTANCE_2 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 322;
  if (distance == DISTANCE_2 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 323;
  if (distance == DISTANCE_2 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 324;
  if (distance == DISTANCE_2 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 325;
  if (distance == DISTANCE_3 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 326;
  if (distance == DISTANCE_3 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 327;
  if (distance == DISTANCE_3 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 328;
  if (distance == DISTANCE_3 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 329;
  if (distance == DISTANCE_4 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 330;
  if (distance == DISTANCE_4 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 331;
  if (distance == DISTANCE_4 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 332;
  if (distance == DISTANCE_4 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 333;
  if (distance == DISTANCE_5 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 334;
  if (distance == DISTANCE_5 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 335;
  if (distance == DISTANCE_5 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 336;
  if (distance == DISTANCE_5 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 337;
  if (distance == DISTANCE_6 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 338;
  if (distance == DISTANCE_6 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 339;
  if (distance == DISTANCE_6 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 340;
  if (distance == DISTANCE_6 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 341;
  if (distance == DISTANCE_7 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 342;
  if (distance == DISTANCE_7 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 343;
  if (distance == DISTANCE_7 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 344;
  if (distance == DISTANCE_7 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 345;
  return 345;
}
