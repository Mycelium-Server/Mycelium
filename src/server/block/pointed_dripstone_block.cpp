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


#include "pointed_dripstone_block.h"

PointedDripstoneBlock::PointedDripstoneBlock() = default;
PointedDripstoneBlock::~PointedDripstoneBlock() = default;

short PointedDripstoneBlock::getId() const {
  return 19638 + waterlogged * 1 + vertical_direction * 2 + thickness * 4;
}

std::shared_ptr<Block> PointedDripstoneBlock::clone() const {
  std::shared_ptr<PointedDripstoneBlock> copy = std::make_shared<PointedDripstoneBlock>();
  copy->thickness = thickness;
  copy->vertical_direction = vertical_direction;
  copy->waterlogged = waterlogged;
  return copy;
}
