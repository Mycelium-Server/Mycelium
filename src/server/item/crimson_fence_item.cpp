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

#include "crimson_fence_item.h"

#include "../block/crimson_fence_block.h"

CrimsonFenceItem::CrimsonFenceItem() = default;
CrimsonFenceItem::~CrimsonFenceItem() = default;

int CrimsonFenceItem::getID() const {
  return 275;
}

std::shared_ptr<Item> CrimsonFenceItem::clone() const {
  return std::make_shared<CrimsonFenceItem>();
}

int CrimsonFenceItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CrimsonFenceBlock().getId();
}