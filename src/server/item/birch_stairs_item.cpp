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

#include "birch_stairs_item.h"

#include "../block/birch_stairs_block.h"

BirchStairsItem::BirchStairsItem() = default;
BirchStairsItem::~BirchStairsItem() = default;

int BirchStairsItem::getID() const {
  return 340;
}

std::shared_ptr<Item> BirchStairsItem::clone() const {
  return std::make_shared<BirchStairsItem>();
}

int BirchStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BirchStairsBlock().getId();
}