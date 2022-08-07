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

#include "flowering_azalea_leaves_block.h"

FloweringAzaleaLeavesBlock::FloweringAzaleaLeavesBlock() = default;
FloweringAzaleaLeavesBlock::~FloweringAzaleaLeavesBlock() = default;

short FloweringAzaleaLeavesBlock::getId() const {
  if (distance == DISTANCE_1 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 430;
  if (distance == DISTANCE_1 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 431;
  if (distance == DISTANCE_1 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 432;
  if (distance == DISTANCE_1 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 433;
  if (distance == DISTANCE_2 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 434;
  if (distance == DISTANCE_2 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 435;
  if (distance == DISTANCE_2 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 436;
  if (distance == DISTANCE_2 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 437;
  if (distance == DISTANCE_3 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 438;
  if (distance == DISTANCE_3 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 439;
  if (distance == DISTANCE_3 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 440;
  if (distance == DISTANCE_3 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 441;
  if (distance == DISTANCE_4 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 442;
  if (distance == DISTANCE_4 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 443;
  if (distance == DISTANCE_4 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 444;
  if (distance == DISTANCE_4 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 445;
  if (distance == DISTANCE_5 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 446;
  if (distance == DISTANCE_5 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 447;
  if (distance == DISTANCE_5 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 448;
  if (distance == DISTANCE_5 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 449;
  if (distance == DISTANCE_6 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 450;
  if (distance == DISTANCE_6 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 451;
  if (distance == DISTANCE_6 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 452;
  if (distance == DISTANCE_6 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 453;
  if (distance == DISTANCE_7 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_TRUE) return 454;
  if (distance == DISTANCE_7 && persistent == PERSISTENT_TRUE && waterlogged == WATERLOGGED_FALSE) return 455;
  if (distance == DISTANCE_7 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_TRUE) return 456;
  if (distance == DISTANCE_7 && persistent == PERSISTENT_FALSE && waterlogged == WATERLOGGED_FALSE) return 457;
  return 457;
}
