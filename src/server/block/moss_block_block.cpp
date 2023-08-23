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


#include "moss_block_block.h"

MossBlockBlock::MossBlockBlock() = default;
MossBlockBlock::~MossBlockBlock() = default;

short MossBlockBlock::getId() const {
  return 19717;
}

std::shared_ptr<Block> MossBlockBlock::clone() const {
  std::shared_ptr<MossBlockBlock> copy = std::make_shared<MossBlockBlock>();
  return copy;
}
