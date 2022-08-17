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


#include "warped_nylium_block.h"

WarpedNyliumBlock::WarpedNyliumBlock() = default;
WarpedNyliumBlock::~WarpedNyliumBlock() = default;

short WarpedNyliumBlock::getId() const {
  return 16179;
}

std::shared_ptr<Block> WarpedNyliumBlock::clone() const {
  std::shared_ptr<WarpedNyliumBlock> copy = std::make_shared<WarpedNyliumBlock>();
  return copy;
}
