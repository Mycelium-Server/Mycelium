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

#include "jungle_button_item.h"

#include "../block/jungle_button_block.h"

JungleButtonItem::JungleButtonItem() = default;
JungleButtonItem::~JungleButtonItem() = default;

int JungleButtonItem::getID() const {
  return 637;
}

std::shared_ptr<Item> JungleButtonItem::clone() const {
  return std::make_shared<JungleButtonItem>();
}

int JungleButtonItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return JungleButtonBlock().getId();
}