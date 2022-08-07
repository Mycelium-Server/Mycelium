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

#include "lectern_block.h"

LecternBlock::LecternBlock() = default;
LecternBlock::~LecternBlock() = default;

short LecternBlock::getId() const {
  if (facing == FACING_NORTH && has_book == HAS_BOOK_TRUE && powered == POWERED_TRUE) return 16038;
  if (facing == FACING_NORTH && has_book == HAS_BOOK_TRUE && powered == POWERED_FALSE) return 16039;
  if (facing == FACING_NORTH && has_book == HAS_BOOK_FALSE && powered == POWERED_TRUE) return 16040;
  if (facing == FACING_NORTH && has_book == HAS_BOOK_FALSE && powered == POWERED_FALSE) return 16041;
  if (facing == FACING_SOUTH && has_book == HAS_BOOK_TRUE && powered == POWERED_TRUE) return 16042;
  if (facing == FACING_SOUTH && has_book == HAS_BOOK_TRUE && powered == POWERED_FALSE) return 16043;
  if (facing == FACING_SOUTH && has_book == HAS_BOOK_FALSE && powered == POWERED_TRUE) return 16044;
  if (facing == FACING_SOUTH && has_book == HAS_BOOK_FALSE && powered == POWERED_FALSE) return 16045;
  if (facing == FACING_WEST && has_book == HAS_BOOK_TRUE && powered == POWERED_TRUE) return 16046;
  if (facing == FACING_WEST && has_book == HAS_BOOK_TRUE && powered == POWERED_FALSE) return 16047;
  if (facing == FACING_WEST && has_book == HAS_BOOK_FALSE && powered == POWERED_TRUE) return 16048;
  if (facing == FACING_WEST && has_book == HAS_BOOK_FALSE && powered == POWERED_FALSE) return 16049;
  if (facing == FACING_EAST && has_book == HAS_BOOK_TRUE && powered == POWERED_TRUE) return 16050;
  if (facing == FACING_EAST && has_book == HAS_BOOK_TRUE && powered == POWERED_FALSE) return 16051;
  if (facing == FACING_EAST && has_book == HAS_BOOK_FALSE && powered == POWERED_TRUE) return 16052;
  if (facing == FACING_EAST && has_book == HAS_BOOK_FALSE && powered == POWERED_FALSE) return 16053;
  return 16041;
}
