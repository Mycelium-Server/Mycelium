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

#include "mangrove_leaves_block.h"

MangroveLeavesBlock::MangroveLeavesBlock() = default;
MangroveLeavesBlock::~MangroveLeavesBlock() = default;

short MangroveLeavesBlock::getId() const {
  if (distance == DISTANCE_1 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 374;
  if (distance == DISTANCE_1 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 375;
  if (distance == DISTANCE_1 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 376;
  if (distance == DISTANCE_1 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 377;
  if (distance == DISTANCE_2 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 378;
  if (distance == DISTANCE_2 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 379;
  if (distance == DISTANCE_2 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 380;
  if (distance == DISTANCE_2 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 381;
  if (distance == DISTANCE_3 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 382;
  if (distance == DISTANCE_3 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 383;
  if (distance == DISTANCE_3 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 384;
  if (distance == DISTANCE_3 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 385;
  if (distance == DISTANCE_4 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 386;
  if (distance == DISTANCE_4 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 387;
  if (distance == DISTANCE_4 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 388;
  if (distance == DISTANCE_4 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 389;
  if (distance == DISTANCE_5 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 390;
  if (distance == DISTANCE_5 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 391;
  if (distance == DISTANCE_5 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 392;
  if (distance == DISTANCE_5 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 393;
  if (distance == DISTANCE_6 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 394;
  if (distance == DISTANCE_6 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 395;
  if (distance == DISTANCE_6 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 396;
  if (distance == DISTANCE_6 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 397;
  if (distance == DISTANCE_7 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 398;
  if (distance == DISTANCE_7 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 399;
  if (distance == DISTANCE_7 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 400;
  if (distance == DISTANCE_7 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 401;
  return 401;
}
