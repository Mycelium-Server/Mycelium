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


#include "sea_lantern_block.h"

SeaLanternBlock::SeaLanternBlock() = default;
SeaLanternBlock::~SeaLanternBlock() = default;

short SeaLanternBlock::getId() const {
  return 8603;
}

std::shared_ptr<Block> SeaLanternBlock::clone() const {
  std::shared_ptr<SeaLanternBlock> copy = std::make_shared<SeaLanternBlock>();
  return copy;
}
