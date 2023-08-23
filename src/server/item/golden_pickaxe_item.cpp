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

#include "golden_pickaxe_item.h"

GoldenPickaxeItem::GoldenPickaxeItem() = default;
GoldenPickaxeItem::~GoldenPickaxeItem() = default;

int GoldenPickaxeItem::getID() const {
  return 747;
}

std::shared_ptr<Item> GoldenPickaxeItem::clone() const {
  return std::make_shared<GoldenPickaxeItem>();
}
