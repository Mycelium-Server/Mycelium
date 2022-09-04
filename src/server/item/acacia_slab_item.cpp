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

#include "acacia_slab_item.h"

#include "../block/acacia_slab_block.h"
#include "../world/world.h"

#define WATER_BLOCK 90
#define ACACIA_SLAB_MIN 9065
#define ACACIA_SLAB_MAX 9070

AcaciaSlabItem::AcaciaSlabItem() = default;
AcaciaSlabItem::~AcaciaSlabItem() = default;

int AcaciaSlabItem::getID() const {
  return 218;
}

std::shared_ptr<Item> AcaciaSlabItem::clone() const {
  return std::make_shared<AcaciaSlabItem>();
}

int AcaciaSlabItem::getBlockID(World *world, const Vector3i &blockPos, const Vector3f &, const BlockFace &face, const Vector3f &, bool) const {
  AcaciaSlabBlock block;

  int state = world->getBlock(blockPos);

  if (state == WATER_BLOCK) {
    block.waterlogged = AcaciaSlabBlock::WATERLOGGED_TRUE;
  } else if(state >= ACACIA_SLAB_MIN && state <= ACACIA_SLAB_MAX) {
    block.type = AcaciaSlabBlock::TYPE_DOUBLE;
  } else {
    switch (face) {
      case BlockFace::DIRECTION_DOWN:
        block.type = AcaciaSlabBlock::TYPE_TOP;
        break;

      case BlockFace::DIRECTION_UP:
        block.type = AcaciaSlabBlock::TYPE_BOTTOM;
        break;

      default:
        // TODO: Type from direction
        break;
    }
  }

  return block.getId();
}
