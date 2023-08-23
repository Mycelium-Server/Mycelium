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


#include "campfire_block.h"

CampfireBlock::CampfireBlock() = default;
CampfireBlock::~CampfireBlock() = default;

short CampfireBlock::getId() const {
  return 16099 + waterlogged * 1 + signal_fire * 2 + lit * 4 + facing * 8;
}

std::shared_ptr<Block> CampfireBlock::clone() const {
  std::shared_ptr<CampfireBlock> copy = std::make_shared<CampfireBlock>();
  copy->facing = facing;
  copy->lit = lit;
  copy->signal_fire = signal_fire;
  copy->waterlogged = waterlogged;
  return copy;
}
