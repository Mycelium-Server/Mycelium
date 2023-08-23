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

#include "magma_block_item.h"

#include "../block/magma_block_block.h"

MagmaBlockItem::MagmaBlockItem() = default;
MagmaBlockItem::~MagmaBlockItem() = default;

int MagmaBlockItem::getID() const {
  return 468;
}

std::shared_ptr<Item> MagmaBlockItem::clone() const {
  return std::make_shared<MagmaBlockItem>();
}

int MagmaBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MagmaBlockBlock().getId();
}