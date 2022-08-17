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

#include "acacia_log_item.h"

#include "../block/acacia_log_block.h"

AcaciaLogItem::AcaciaLogItem() = default;
AcaciaLogItem::~AcaciaLogItem() = default;

int AcaciaLogItem::getID() const {
  return 108;
}

std::shared_ptr<Item> AcaciaLogItem::clone() const {
  return std::make_shared<AcaciaLogItem>();
}

int AcaciaLogItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &face, const Vector3f &, bool) const {
  AcaciaLogBlock block;

  switch (face) {
    case BlockFace::TOP:
    case BlockFace::BOTTOM:
      block.axis = AcaciaLogBlock::AXIS_Y;
      break;

    case BlockFace::NORTH:
    case BlockFace::SOUTH:
      block.axis = AcaciaLogBlock::AXIS_Z;
      break;

    case BlockFace::WEST:
    case BlockFace::EAST:
      block.axis = AcaciaLogBlock::AXIS_X;
      break;
  }

  return block.getId();
}
