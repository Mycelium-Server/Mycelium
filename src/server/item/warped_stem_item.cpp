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

#include "warped_stem_item.h"

#include "../block/warped_stem_block.h"

WarpedStemItem::WarpedStemItem() = default;
WarpedStemItem::~WarpedStemItem() = default;

int WarpedStemItem::getID() const {
  return 114;
}

std::shared_ptr<Item> WarpedStemItem::clone() const {
  return std::make_shared<WarpedStemItem>();
}

int WarpedStemItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WarpedStemBlock().getId();
}