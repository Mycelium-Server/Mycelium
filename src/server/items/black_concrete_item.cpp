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

#include "black_concrete_item.h"

#include "../blocks/black_concrete_block.h"

BlackConcreteItem::BlackConcreteItem() = default;
BlackConcreteItem::~BlackConcreteItem() = default;

int BlackConcreteItem::getID() const {
  return 522;
}

std::shared_ptr<Item> BlackConcreteItem::clone() const {
  return std::make_shared<BlackConcreteItem>();
}

int BlackConcreteItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlackConcreteBlock().getId();
}