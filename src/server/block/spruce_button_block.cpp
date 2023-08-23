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


#include "spruce_button_block.h"

SpruceButtonBlock::SpruceButtonBlock() = default;
SpruceButtonBlock::~SpruceButtonBlock() = default;

short SpruceButtonBlock::getId() const {
  return 6963 + powered * 1 + facing * 2 + face * 8;
}

std::shared_ptr<Block> SpruceButtonBlock::clone() const {
  std::shared_ptr<SpruceButtonBlock> copy = std::make_shared<SpruceButtonBlock>();
  copy->face = face;
  copy->facing = facing;
  copy->powered = powered;
  return copy;
}
