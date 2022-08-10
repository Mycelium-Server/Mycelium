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

#include "acacia_fence_item.h"

#include "../blocks/acacia_fence_block.h"
#include "../world/world.h"

#define WATER_BLOCK 90

AcaciaFenceItem::AcaciaFenceItem() = default;
AcaciaFenceItem::~AcaciaFenceItem() = default;

int AcaciaFenceItem::getID() const {
  return 272;
}

std::shared_ptr<Item> AcaciaFenceItem::clone() const {
  return std::make_shared<AcaciaFenceItem>();
}

int AcaciaFenceItem::getBlockID(World* world, const Vector3i& blockPos, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  AcaciaFenceBlock block;

  if (world->getBlock(blockPos) == WATER_BLOCK) {
    block.waterlogged = AcaciaFenceBlock::WATERLOGGED_TRUE;
  }

  // TODO: Check neighbour blocks

  return block.getId();
}
