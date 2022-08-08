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


#include "command_block_block.h"

CommandBlockBlock::CommandBlockBlock() = default;
CommandBlockBlock::~CommandBlockBlock() = default;

short CommandBlockBlock::getId() const {
  if (conditional == CONDITIONAL_TRUE && facing == FACING_NORTH) return 6236;
  if (conditional == CONDITIONAL_TRUE && facing == FACING_EAST) return 6237;
  if (conditional == CONDITIONAL_TRUE && facing == FACING_SOUTH) return 6238;
  if (conditional == CONDITIONAL_TRUE && facing == FACING_WEST) return 6239;
  if (conditional == CONDITIONAL_TRUE && facing == FACING_UP) return 6240;
  if (conditional == CONDITIONAL_TRUE && facing == FACING_DOWN) return 6241;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_NORTH) return 6242;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_EAST) return 6243;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_SOUTH) return 6244;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_WEST) return 6245;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_UP) return 6246;
  if (conditional == CONDITIONAL_FALSE && facing == FACING_DOWN) return 6247;
  return 6242;
}

std::shared_ptr<Block> CommandBlockBlock::clone() const {
  std::shared_ptr<CommandBlockBlock> copy = std::make_shared<CommandBlockBlock>();
  copy->conditional = conditional;
  copy->facing = facing;
  return copy;
}
