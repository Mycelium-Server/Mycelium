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

#include "acacia_door_item.h"

#include "../block/acacia_door_block.h"

AcaciaDoorItem::AcaciaDoorItem() = default;
AcaciaDoorItem::~AcaciaDoorItem() = default;

int AcaciaDoorItem::getID() const {
  return 661;
}

std::shared_ptr<Item> AcaciaDoorItem::clone() const {
  return std::make_shared<AcaciaDoorItem>();
}

int AcaciaDoorItem::getBlockID(World*, const Vector3i&, const Vector3f&, const BlockFace& face, const Vector3f&, bool) const {
  AcaciaDoorBlock block;
  block.open = AcaciaDoorBlock::OPEN_FALSE;
  block.powered = AcaciaDoorBlock::POWERED_FALSE;
  block.half = face == BlockFace::BOTTOM ? AcaciaDoorBlock::HALF_UPPER : AcaciaDoorBlock::HALF_LOWER;
  // TODO: hinge

  switch (face) {
    case BlockFace::EAST:
      block.facing = AcaciaDoorBlock::FACING_EAST;
      break;

    case BlockFace::NORTH:
      block.facing = AcaciaDoorBlock::FACING_NORTH;
      break;

    case BlockFace::SOUTH:
      block.facing = AcaciaDoorBlock::FACING_SOUTH;
      break;

    case BlockFace::WEST:
      block.facing = AcaciaDoorBlock::FACING_WEST;
      break;

    default:
      // TODO: Facing
      break;
  }

  return block.getId();
}
