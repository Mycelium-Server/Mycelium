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

#include "brown_stained_glass_pane_item.h"

#include "../block/brown_stained_glass_pane_block.h"

BrownStainedGlassPaneItem::BrownStainedGlassPaneItem() = default;
BrownStainedGlassPaneItem::~BrownStainedGlassPaneItem() = default;

int BrownStainedGlassPaneItem::getID() const {
  return 451;
}

std::shared_ptr<Item> BrownStainedGlassPaneItem::clone() const {
  return std::make_shared<BrownStainedGlassPaneItem>();
}

int BrownStainedGlassPaneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BrownStainedGlassPaneBlock().getId();
}
