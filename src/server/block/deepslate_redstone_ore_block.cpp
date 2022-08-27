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


#include "deepslate_redstone_ore_block.h"

DeepslateRedstoneOreBlock::DeepslateRedstoneOreBlock() = default;
DeepslateRedstoneOreBlock::~DeepslateRedstoneOreBlock() = default;

short DeepslateRedstoneOreBlock::getId() const {
  if (lit == LIT_TRUE) return 4194;
  if (lit == LIT_FALSE) return 4195;
  return 4195;
}

std::shared_ptr<Block> DeepslateRedstoneOreBlock::clone() const {
  std::shared_ptr<DeepslateRedstoneOreBlock> copy = std::make_shared<DeepslateRedstoneOreBlock>();
  copy->lit = lit;
  return copy;
}