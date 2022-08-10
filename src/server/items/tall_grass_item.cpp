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

#include "tall_grass_item.h"

TallGrassItem::TallGrassItem() = default;
TallGrassItem::~TallGrassItem() = default;

int TallGrassItem::getID() const {
  return 421;
}

std::shared_ptr<Item> TallGrassItem::clone() const {
  return std::make_shared<TallGrassItem>();
}
