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


#include "mangrove_propagule_block.h"

MangrovePropaguleBlock::MangrovePropaguleBlock() = default;
MangrovePropaguleBlock::~MangrovePropaguleBlock() = default;

short MangrovePropaguleBlock::getId() const {
  return 34 + waterlogged * 1 + stage * 2 + hanging * 4 + age * 8;
}

std::shared_ptr<Block> MangrovePropaguleBlock::clone() const {
  std::shared_ptr<MangrovePropaguleBlock> copy = std::make_shared<MangrovePropaguleBlock>();
  copy->age = age;
  copy->hanging = hanging;
  copy->stage = stage;
  copy->waterlogged = waterlogged;
  return copy;
}
