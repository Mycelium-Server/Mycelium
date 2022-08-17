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


#include "light_blue_shulker_box_block.h"

LightBlueShulkerBoxBlock::LightBlueShulkerBoxBlock() = default;
LightBlueShulkerBoxBlock::~LightBlueShulkerBoxBlock() = default;

short LightBlueShulkerBoxBlock::getId() const {
  if (facing == FACING_NORTH) return 10177;
  if (facing == FACING_EAST) return 10178;
  if (facing == FACING_SOUTH) return 10179;
  if (facing == FACING_WEST) return 10180;
  if (facing == FACING_UP) return 10181;
  if (facing == FACING_DOWN) return 10182;
  return 10181;
}

std::shared_ptr<Block> LightBlueShulkerBoxBlock::clone() const {
  std::shared_ptr<LightBlueShulkerBoxBlock> copy = std::make_shared<LightBlueShulkerBoxBlock>();
  copy->facing = facing;
  return copy;
}
