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


#include "comparator_block.h"

ComparatorBlock::ComparatorBlock() = default;
ComparatorBlock::~ComparatorBlock() = default;

short ComparatorBlock::getId() const {
  if (facing == FACING_NORTH && mode == MODE_COMPARE && powered == POWERED_TRUE) return 7295;
  if (facing == FACING_NORTH && mode == MODE_COMPARE && powered == POWERED_FALSE) return 7296;
  if (facing == FACING_NORTH && mode == MODE_SUBTRACT && powered == POWERED_TRUE) return 7297;
  if (facing == FACING_NORTH && mode == MODE_SUBTRACT && powered == POWERED_FALSE) return 7298;
  if (facing == FACING_SOUTH && mode == MODE_COMPARE && powered == POWERED_TRUE) return 7299;
  if (facing == FACING_SOUTH && mode == MODE_COMPARE && powered == POWERED_FALSE) return 7300;
  if (facing == FACING_SOUTH && mode == MODE_SUBTRACT && powered == POWERED_TRUE) return 7301;
  if (facing == FACING_SOUTH && mode == MODE_SUBTRACT && powered == POWERED_FALSE) return 7302;
  if (facing == FACING_WEST && mode == MODE_COMPARE && powered == POWERED_TRUE) return 7303;
  if (facing == FACING_WEST && mode == MODE_COMPARE && powered == POWERED_FALSE) return 7304;
  if (facing == FACING_WEST && mode == MODE_SUBTRACT && powered == POWERED_TRUE) return 7305;
  if (facing == FACING_WEST && mode == MODE_SUBTRACT && powered == POWERED_FALSE) return 7306;
  if (facing == FACING_EAST && mode == MODE_COMPARE && powered == POWERED_TRUE) return 7307;
  if (facing == FACING_EAST && mode == MODE_COMPARE && powered == POWERED_FALSE) return 7308;
  if (facing == FACING_EAST && mode == MODE_SUBTRACT && powered == POWERED_TRUE) return 7309;
  if (facing == FACING_EAST && mode == MODE_SUBTRACT && powered == POWERED_FALSE) return 7310;
  return 7296;
}

std::shared_ptr<Block> ComparatorBlock::clone() const {
  std::shared_ptr<ComparatorBlock> copy = std::make_shared<ComparatorBlock>();
  copy->facing = facing;
  copy->mode = mode;
  copy->powered = powered;
  return copy;
}
