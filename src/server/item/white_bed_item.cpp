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

#include "white_bed_item.h"

#include "../block/white_bed_block.h"

WhiteBedItem::WhiteBedItem() = default;
WhiteBedItem::~WhiteBedItem() = default;

int WhiteBedItem::getID() const {
  return 869;
}

std::shared_ptr<Item> WhiteBedItem::clone() const {
  return std::make_shared<WhiteBedItem>();
}

int WhiteBedItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WhiteBedBlock().getId();
}
