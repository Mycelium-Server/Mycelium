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


#include "spruce_wall_sign_block.h"

SpruceWallSignBlock::SpruceWallSignBlock() = default;
SpruceWallSignBlock::~SpruceWallSignBlock() = default;

short SpruceWallSignBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 4040;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 4041;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 4042;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 4043;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 4044;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 4045;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 4046;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 4047;
  return 4041;
}

std::shared_ptr<Block> SpruceWallSignBlock::clone() const {
  std::shared_ptr<SpruceWallSignBlock> copy = std::make_shared<SpruceWallSignBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
