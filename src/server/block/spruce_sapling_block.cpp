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


#include "spruce_sapling_block.h"

SpruceSaplingBlock::SpruceSaplingBlock() = default;
SpruceSaplingBlock::~SpruceSaplingBlock() = default;

short SpruceSaplingBlock::getId() const {
  if (stage == STAGE_0) return 24;
  if (stage == STAGE_1) return 25;
  return 24;
}

std::shared_ptr<Block> SpruceSaplingBlock::clone() const {
  std::shared_ptr<SpruceSaplingBlock> copy = std::make_shared<SpruceSaplingBlock>();
  copy->stage = stage;
  return copy;
}