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

#include "acacia_leaves_item.h"

#include "../block/acacia_leaves_block.h"
#include "../world/world.h"

#define WATER_BLOCK 90

AcaciaLeavesItem::AcaciaLeavesItem() = default;
AcaciaLeavesItem::~AcaciaLeavesItem() = default;

int AcaciaLeavesItem::getID() const {
  return 146;
}

std::shared_ptr<Item> AcaciaLeavesItem::clone() const {
  return std::make_shared<AcaciaLeavesItem>();
}

int AcaciaLeavesItem::getBlockID(World *world, const Vector3i &blockPos, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  AcaciaLeavesBlock block;
  // TODO: Search wood ?
  block.persistent = AcaciaLeavesBlock::PERSISTENT_TRUE;
  if (world->getBlock(blockPos) == WATER_BLOCK) {
    block.waterlogged = AcaciaLeavesBlock::WATERLOGGED_TRUE;
  }
  return block.getId();
}
