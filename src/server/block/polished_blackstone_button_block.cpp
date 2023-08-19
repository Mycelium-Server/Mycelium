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


#include "polished_blackstone_button_block.h"

PolishedBlackstoneButtonBlock::PolishedBlackstoneButtonBlock() = default;
PolishedBlackstoneButtonBlock::~PolishedBlackstoneButtonBlock() = default;

short PolishedBlackstoneButtonBlock::getId() const {
  return 17962 + powered * 1 + facing * 2 + face * 8;
}

std::shared_ptr<Block> PolishedBlackstoneButtonBlock::clone() const {
  std::shared_ptr<PolishedBlackstoneButtonBlock> copy = std::make_shared<PolishedBlackstoneButtonBlock>();
  copy->face = face;
  copy->facing = facing;
  copy->powered = powered;
  return copy;
}
