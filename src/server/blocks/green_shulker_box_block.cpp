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


#include "green_shulker_box_block.h"

GreenShulkerBoxBlock::GreenShulkerBoxBlock() = default;
GreenShulkerBoxBlock::~GreenShulkerBoxBlock() = default;

short GreenShulkerBoxBlock::getId() const {
  if (facing == FACING_NORTH) return 10237;
  if (facing == FACING_EAST) return 10238;
  if (facing == FACING_SOUTH) return 10239;
  if (facing == FACING_WEST) return 10240;
  if (facing == FACING_UP) return 10241;
  if (facing == FACING_DOWN) return 10242;
  return 10241;
}

std::shared_ptr<Block> GreenShulkerBoxBlock::clone() const {
  std::shared_ptr<GreenShulkerBoxBlock> copy = std::make_shared<GreenShulkerBoxBlock>();
  copy->facing = facing;
  return copy;
}
