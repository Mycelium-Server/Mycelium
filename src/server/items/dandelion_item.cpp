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

#include "dandelion_item.h"

#include "../blocks/dandelion_block.h"

DandelionItem::DandelionItem() = default;
DandelionItem::~DandelionItem() = default;

int DandelionItem::getID() const {
  return 183;
}

std::shared_ptr<Item> DandelionItem::clone() const {
  return std::make_shared<DandelionItem>();
}

int DandelionItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DandelionBlock().getId();
}