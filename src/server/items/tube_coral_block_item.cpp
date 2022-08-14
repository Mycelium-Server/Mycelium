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

#include "tube_coral_block_item.h"

#include "../blocks/tube_coral_block_block.h"

TubeCoralBlockItem::TubeCoralBlockItem() = default;
TubeCoralBlockItem::~TubeCoralBlockItem() = default;

int TubeCoralBlockItem::getID() const {
  return 545;
}

std::shared_ptr<Item> TubeCoralBlockItem::clone() const {
  return std::make_shared<TubeCoralBlockItem>();
}

int TubeCoralBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return TubeCoralBlockBlock().getId();
}