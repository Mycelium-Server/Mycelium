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


#include "black_shulker_box_block.h"

BlackShulkerBoxBlock::BlackShulkerBoxBlock() = default;
BlackShulkerBoxBlock::~BlackShulkerBoxBlock() = default;

short BlackShulkerBoxBlock::getId() const {
  if (facing == FACING_NORTH) return 10249;
  if (facing == FACING_EAST) return 10250;
  if (facing == FACING_SOUTH) return 10251;
  if (facing == FACING_WEST) return 10252;
  if (facing == FACING_UP) return 10253;
  if (facing == FACING_DOWN) return 10254;
  return 10253;
}

std::shared_ptr<Block> BlackShulkerBoxBlock::clone() const {
  std::shared_ptr<BlackShulkerBoxBlock> copy = std::make_shared<BlackShulkerBoxBlock>();
  copy->facing = facing;
  return copy;
}