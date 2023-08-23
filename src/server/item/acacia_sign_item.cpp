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

#include "acacia_sign_item.h"

#include "../block/acacia_sign_block.h"
#include "../block/acacia_wall_sign_block.h"
#include "../world/world.h"

#define WATER_BLOCK 90

AcaciaSignItem::AcaciaSignItem() = default;
AcaciaSignItem::~AcaciaSignItem() = default;

int AcaciaSignItem::getID() const {
  return 808;
}

std::shared_ptr<Item> AcaciaSignItem::clone() const {
  return std::make_shared<AcaciaSignItem>();
}

int AcaciaSignItem::getBlockID(World *world, const Vector3i &blockPos, const Vector3f &, const BlockFace &face, const Vector3f &, bool) const {
  bool waterlogged = (world->getBlock(blockPos) == WATER_BLOCK);

  if (face == BlockFace::DIRECTION_UP) {
    AcaciaSignBlock block;
    if (waterlogged) {
      block.waterlogged = AcaciaSignBlock::WATERLOGGED_TRUE;
    }
    // TODO: Rotation
    return block.getId();
  }

  AcaciaWallSignBlock block;

  if (waterlogged) {
    block.waterlogged = AcaciaWallSignBlock::WATERLOGGED_TRUE;
  }

  switch (face) {
    case BlockFace::DIRECTION_EAST:
      block.facing = AcaciaWallSignBlock::FACING_EAST;
      break;

    case BlockFace::DIRECTION_WEST:
      block.facing = AcaciaWallSignBlock::FACING_WEST;
      break;

    case BlockFace::DIRECTION_SOUTH:
      block.facing = AcaciaWallSignBlock::FACING_SOUTH;
      break;

    case BlockFace::DIRECTION_NORTH:
      block.facing = AcaciaWallSignBlock::FACING_NORTH;
      break;

    default:
      // TODO: Facing by direction
      break;
  }

  return block.getId();
}
