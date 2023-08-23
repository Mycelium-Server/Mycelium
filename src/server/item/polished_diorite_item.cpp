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

#include "polished_diorite_item.h"

#include "../block/polished_diorite_block.h"

PolishedDioriteItem::PolishedDioriteItem() = default;
PolishedDioriteItem::~PolishedDioriteItem() = default;

int PolishedDioriteItem::getID() const {
  return 5;
}

std::shared_ptr<Item> PolishedDioriteItem::clone() const {
  return std::make_shared<PolishedDioriteItem>();
}

int PolishedDioriteItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PolishedDioriteBlock().getId();
}