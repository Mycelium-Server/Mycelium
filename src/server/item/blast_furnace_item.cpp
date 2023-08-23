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

#include "blast_furnace_item.h"

#include "../block/blast_furnace_block.h"

BlastFurnaceItem::BlastFurnaceItem() = default;
BlastFurnaceItem::~BlastFurnaceItem() = default;

int BlastFurnaceItem::getID() const {
  return 1091;
}

std::shared_ptr<Item> BlastFurnaceItem::clone() const {
  return std::make_shared<BlastFurnaceItem>();
}

int BlastFurnaceItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlastFurnaceBlock().getId();
}
