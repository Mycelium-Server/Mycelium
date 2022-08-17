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

#include "muddy_mangrove_roots_item.h"

#include "../block/muddy_mangrove_roots_block.h"

MuddyMangroveRootsItem::MuddyMangroveRootsItem() = default;
MuddyMangroveRootsItem::~MuddyMangroveRootsItem() = default;

int MuddyMangroveRootsItem::getID() const {
  return 112;
}

std::shared_ptr<Item> MuddyMangroveRootsItem::clone() const {
  return std::make_shared<MuddyMangroveRootsItem>();
}

int MuddyMangroveRootsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MuddyMangroveRootsBlock().getId();
}