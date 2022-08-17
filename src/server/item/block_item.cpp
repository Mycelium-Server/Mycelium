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

#include "block_item.h"

BlockItem::BlockItem() = default;
BlockItem::~BlockItem() = default;

int BlockItem::getBlockID(World* world, const Vector3i& blockPos) const {
  return getBlockID(world, blockPos, {}, BlockFace::TOP, {}, false);
}

bool BlockItem::isBlockItem() const {
  return true;
}