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

#include "white_shulker_box_item.h"

#include "../block/white_shulker_box_block.h"

WhiteShulkerBoxItem::WhiteShulkerBoxItem() = default;
WhiteShulkerBoxItem::~WhiteShulkerBoxItem() = default;

int WhiteShulkerBoxItem::getID() const {
  return 475;
}

std::shared_ptr<Item> WhiteShulkerBoxItem::clone() const {
  return std::make_shared<WhiteShulkerBoxItem>();
}

int WhiteShulkerBoxItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WhiteShulkerBoxBlock().getId();
}