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


#include "damaged_anvil_block.h"

DamagedAnvilBlock::DamagedAnvilBlock() = default;
DamagedAnvilBlock::~DamagedAnvilBlock() = default;

short DamagedAnvilBlock::getId() const {
  return 7235 + facing * 1;
}

std::shared_ptr<Block> DamagedAnvilBlock::clone() const {
  std::shared_ptr<DamagedAnvilBlock> copy = std::make_shared<DamagedAnvilBlock>();
  copy->facing = facing;
  return copy;
}
