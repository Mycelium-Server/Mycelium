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


#include "big_dripleaf_block.h"

BigDripleafBlock::BigDripleafBlock() = default;
BigDripleafBlock::~BigDripleafBlock() = default;

short BigDripleafBlock::getId() const {
  return 19718 + waterlogged * 1 + tilt * 2 + facing * 8;
}

std::shared_ptr<Block> BigDripleafBlock::clone() const {
  std::shared_ptr<BigDripleafBlock> copy = std::make_shared<BigDripleafBlock>();
  copy->facing = facing;
  copy->tilt = tilt;
  copy->waterlogged = waterlogged;
  return copy;
}
