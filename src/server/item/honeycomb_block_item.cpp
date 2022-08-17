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

#include "honeycomb_block_item.h"

#include "../block/honeycomb_block_block.h"

HoneycombBlockItem::HoneycombBlockItem() = default;
HoneycombBlockItem::~HoneycombBlockItem() = default;

int HoneycombBlockItem::getID() const {
  return 1109;
}

std::shared_ptr<Item> HoneycombBlockItem::clone() const {
  return std::make_shared<HoneycombBlockItem>();
}

int HoneycombBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return HoneycombBlockBlock().getId();
}
