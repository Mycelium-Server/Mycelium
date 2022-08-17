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

#include "cobbled_deepslate_item.h"

#include "../block/cobbled_deepslate_block.h"

CobbledDeepslateItem::CobbledDeepslateItem() = default;
CobbledDeepslateItem::~CobbledDeepslateItem() = default;

int CobbledDeepslateItem::getID() const {
  return 9;
}

std::shared_ptr<Item> CobbledDeepslateItem::clone() const {
  return std::make_shared<CobbledDeepslateItem>();
}

int CobbledDeepslateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CobbledDeepslateBlock().getId();
}