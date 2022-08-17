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

#include "gilded_blackstone_item.h"

#include "../block/gilded_blackstone_block.h"

GildedBlackstoneItem::GildedBlackstoneItem() = default;
GildedBlackstoneItem::~GildedBlackstoneItem() = default;

int GildedBlackstoneItem::getID() const {
  return 1115;
}

std::shared_ptr<Item> GildedBlackstoneItem::clone() const {
  return std::make_shared<GildedBlackstoneItem>();
}

int GildedBlackstoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GildedBlackstoneBlock().getId();
}