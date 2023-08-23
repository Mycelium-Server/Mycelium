/*
 * Mycelium
 * Copyright (C) 2022 - 2023  JNNGL
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


#include "spruce_trapdoor_block.h"

SpruceTrapdoorBlock::SpruceTrapdoorBlock() = default;
SpruceTrapdoorBlock::~SpruceTrapdoorBlock() = default;

short SpruceTrapdoorBlock::getId() const {
  return 4484 + waterlogged * 1 + powered * 2 + open * 4 + half * 8 + facing * 16;
}

std::shared_ptr<Block> SpruceTrapdoorBlock::clone() const {
  std::shared_ptr<SpruceTrapdoorBlock> copy = std::make_shared<SpruceTrapdoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->open = open;
  copy->powered = powered;
  copy->waterlogged = waterlogged;
  return copy;
}
