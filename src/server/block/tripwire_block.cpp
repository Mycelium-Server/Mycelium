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


#include "tripwire_block.h"

TripwireBlock::TripwireBlock() = default;
TripwireBlock::~TripwireBlock() = default;

short TripwireBlock::getId() const {
  return 5867 + west * 1 + south * 2 + powered * 4 + north * 8 + east * 16 + disarmed * 32 + attached * 64;
}

std::shared_ptr<Block> TripwireBlock::clone() const {
  std::shared_ptr<TripwireBlock> copy = std::make_shared<TripwireBlock>();
  copy->attached = attached;
  copy->disarmed = disarmed;
  copy->east = east;
  copy->north = north;
  copy->powered = powered;
  copy->south = south;
  copy->west = west;
  return copy;
}
