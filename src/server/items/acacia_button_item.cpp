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

#include "acacia_button_item.h"

#include "../blocks/acacia_button_block.h"

AcaciaButtonItem::AcaciaButtonItem() = default;
AcaciaButtonItem::~AcaciaButtonItem() = default;

int AcaciaButtonItem::getID() const {
  return 638;
}

std::shared_ptr<Item> AcaciaButtonItem::clone() const {
  return std::make_shared<AcaciaButtonItem>();
}
int AcaciaButtonItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &face, const Vector3f &, bool) const {
  AcaciaButtonBlock block;
  block.powered = AcaciaButtonBlock::POWERED_FALSE;

  switch (face) {
    case BlockFace::TOP:
      block.face = AcaciaButtonBlock::FACE_CEILING;
      block.facing = AcaciaButtonBlock::FACING_NORTH;
      break;

    case BlockFace::WEST:
      block.face = AcaciaButtonBlock::FACE_WALL;
      block.facing = AcaciaButtonBlock::FACING_WEST;
      break;

    case BlockFace::SOUTH:
      block.face = AcaciaButtonBlock::FACE_WALL;
      block.facing = AcaciaButtonBlock::FACING_SOUTH;
      break;

    case BlockFace::NORTH:
      block.face = AcaciaButtonBlock::FACE_WALL;
      block.facing = AcaciaButtonBlock::FACING_NORTH;
      break;

    case BlockFace::EAST:
      block.face = AcaciaButtonBlock::FACE_WALL;
      block.facing = AcaciaButtonBlock::FACING_EAST;
      break;

    case BlockFace::BOTTOM:
      block.face = AcaciaButtonBlock::FACE_FLOOR;
      block.facing = AcaciaButtonBlock::FACING_NORTH;
      break;
  }

  return block.getId();
}
