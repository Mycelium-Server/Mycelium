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

#include "mangrove_propagule_block.h"

MangrovePropaguleBlock::MangrovePropaguleBlock() = default;
MangrovePropaguleBlock::~MangrovePropaguleBlock() = default;

short MangrovePropaguleBlock::getId() const {
  if (age == AGE_0 && hanging == HANGING_TRUE && stage == STAGE_0 && waterlogged == WATERLOGGED_TRUE) return 34;
  if (age == AGE_0 && hanging == HANGING_TRUE && stage == STAGE_0 && waterlogged == WATERLOGGED_FALSE) return 35;
  if (age == AGE_0 && hanging == HANGING_TRUE && stage == STAGE_1 && waterlogged == WATERLOGGED_TRUE) return 36;
  if (age == AGE_0 && hanging == HANGING_TRUE && stage == STAGE_1 && waterlogged == WATERLOGGED_FALSE) return 37;
  if (age == AGE_0 && hanging == HANGING_FALSE && stage == STAGE_0 && waterlogged == WATERLOGGED_TRUE) return 38;
  if (age == AGE_0 && hanging == HANGING_FALSE && stage == STAGE_0 && waterlogged == WATERLOGGED_FALSE) return 39;
  if (age == AGE_0 && hanging == HANGING_FALSE && stage == STAGE_1 && waterlogged == WATERLOGGED_TRUE) return 40;
  if (age == AGE_0 && hanging == HANGING_FALSE && stage == STAGE_1 && waterlogged == WATERLOGGED_FALSE) return 41;
  if (age == AGE_1 && hanging == HANGING_TRUE && stage == STAGE_0 && waterlogged == WATERLOGGED_TRUE) return 42;
  if (age == AGE_1 && hanging == HANGING_TRUE && stage == STAGE_0 && waterlogged == WATERLOGGED_FALSE) return 43;
  if (age == AGE_1 && hanging == HANGING_TRUE && stage == STAGE_1 && waterlogged == WATERLOGGED_TRUE) return 44;
  if (age == AGE_1 && hanging == HANGING_TRUE && stage == STAGE_1 && waterlogged == WATERLOGGED_FALSE) return 45;
  if (age == AGE_1 && hanging == HANGING_FALSE && stage == STAGE_0 && waterlogged == WATERLOGGED_TRUE) return 46;
  if (age == AGE_1 && hanging == HANGING_FALSE && stage == STAGE_0 && waterlogged == WATERLOGGED_FALSE) return 47;
  if (age == AGE_1 && hanging == HANGING_FALSE && stage == STAGE_1 && waterlogged == WATERLOGGED_TRUE) return 48;
  if (age == AGE_1 && hanging == HANGING_FALSE && stage == STAGE_1 && waterlogged == WATERLOGGED_FALSE) return 49;
  if (age == AGE_2 && hanging == HANGING_TRUE && stage == STAGE_0 && waterlogged == WATERLOGGED_TRUE) return 50;
  if (age == AGE_2 && hanging == HANGING_TRUE && stage == STAGE_0 && waterlogged == WATERLOGGED_FALSE) return 51;
  if (age == AGE_2 && hanging == HANGING_TRUE && stage == STAGE_1 && waterlogged == WATERLOGGED_TRUE) return 52;
  if (age == AGE_2 && hanging == HANGING_TRUE && stage == STAGE_1 && waterlogged == WATERLOGGED_FALSE) return 53;
  if (age == AGE_2 && hanging == HANGING_FALSE && stage == STAGE_0 && waterlogged == WATERLOGGED_TRUE) return 54;
  if (age == AGE_2 && hanging == HANGING_FALSE && stage == STAGE_0 && waterlogged == WATERLOGGED_FALSE) return 55;
  if (age == AGE_2 && hanging == HANGING_FALSE && stage == STAGE_1 && waterlogged == WATERLOGGED_TRUE) return 56;
  if (age == AGE_2 && hanging == HANGING_FALSE && stage == STAGE_1 && waterlogged == WATERLOGGED_FALSE) return 57;
  if (age == AGE_3 && hanging == HANGING_TRUE && stage == STAGE_0 && waterlogged == WATERLOGGED_TRUE) return 58;
  if (age == AGE_3 && hanging == HANGING_TRUE && stage == STAGE_0 && waterlogged == WATERLOGGED_FALSE) return 59;
  if (age == AGE_3 && hanging == HANGING_TRUE && stage == STAGE_1 && waterlogged == WATERLOGGED_TRUE) return 60;
  if (age == AGE_3 && hanging == HANGING_TRUE && stage == STAGE_1 && waterlogged == WATERLOGGED_FALSE) return 61;
  if (age == AGE_3 && hanging == HANGING_FALSE && stage == STAGE_0 && waterlogged == WATERLOGGED_TRUE) return 62;
  if (age == AGE_3 && hanging == HANGING_FALSE && stage == STAGE_0 && waterlogged == WATERLOGGED_FALSE) return 63;
  if (age == AGE_3 && hanging == HANGING_FALSE && stage == STAGE_1 && waterlogged == WATERLOGGED_TRUE) return 64;
  if (age == AGE_3 && hanging == HANGING_FALSE && stage == STAGE_1 && waterlogged == WATERLOGGED_FALSE) return 65;
  if (age == AGE_4 && hanging == HANGING_TRUE && stage == STAGE_0 && waterlogged == WATERLOGGED_TRUE) return 66;
  if (age == AGE_4 && hanging == HANGING_TRUE && stage == STAGE_0 && waterlogged == WATERLOGGED_FALSE) return 67;
  if (age == AGE_4 && hanging == HANGING_TRUE && stage == STAGE_1 && waterlogged == WATERLOGGED_TRUE) return 68;
  if (age == AGE_4 && hanging == HANGING_TRUE && stage == STAGE_1 && waterlogged == WATERLOGGED_FALSE) return 69;
  if (age == AGE_4 && hanging == HANGING_FALSE && stage == STAGE_0 && waterlogged == WATERLOGGED_TRUE) return 70;
  if (age == AGE_4 && hanging == HANGING_FALSE && stage == STAGE_0 && waterlogged == WATERLOGGED_FALSE) return 71;
  if (age == AGE_4 && hanging == HANGING_FALSE && stage == STAGE_1 && waterlogged == WATERLOGGED_TRUE) return 72;
  if (age == AGE_4 && hanging == HANGING_FALSE && stage == STAGE_1 && waterlogged == WATERLOGGED_FALSE) return 73;
  return 39;
}
