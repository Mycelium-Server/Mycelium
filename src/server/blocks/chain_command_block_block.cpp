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

#include "chain_command_block_block.h"

ChainCommandBlockBlock::ChainCommandBlockBlock() = default;
ChainCommandBlockBlock::~ChainCommandBlockBlock() = default;

short ChainCommandBlockBlock::getId() const {
  if (conditional == CONDITIONAL_TRUE && facing == FACING_NORTH) return 10118;
  if (conditional == CONDITIONAL_TRUE && facing == FACING_EAST) return 10119;
  if (conditional == CONDITIONAL_TRUE && facing == FACING_SOUTH) return 10120;
  if (conditional == CONDITIONAL_TRUE && facing == FACING_WEST) return 10121;
  if (conditional == CONDITIONAL_TRUE && facing == FACING_UP) return 10122;
  if (conditional == CONDITIONAL_TRUE && facing == FACING_DOWN) return 10123;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_NORTH) return 10124;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_EAST) return 10125;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_SOUTH) return 10126;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_WEST) return 10127;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_UP) return 10128;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_DOWN) return 10129;
  return 10124;
}
