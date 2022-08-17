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

#include "smooth_red_sandstone_item.h"

#include "../block/smooth_red_sandstone_block.h"

SmoothRedSandstoneItem::SmoothRedSandstoneItem() = default;
SmoothRedSandstoneItem::~SmoothRedSandstoneItem() = default;

int SmoothRedSandstoneItem::getID() const {
  return 241;
}

std::shared_ptr<Item> SmoothRedSandstoneItem::clone() const {
  return std::make_shared<SmoothRedSandstoneItem>();
}

int SmoothRedSandstoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SmoothRedSandstoneBlock().getId();
}