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


#include "respawn_anchor_block.h"

RespawnAnchorBlock::RespawnAnchorBlock() = default;
RespawnAnchorBlock::~RespawnAnchorBlock() = default;

short RespawnAnchorBlock::getId() const {
  if (charges == CHARGES_0) return 17038;
  if (charges == CHARGES_1) return 17039;
  if (charges == CHARGES_2) return 17040;
  if (charges == CHARGES_3) return 17041;
  if (charges == CHARGES_4) return 17042;
  return 17038;
}

std::shared_ptr<Block> RespawnAnchorBlock::clone() const {
  std::shared_ptr<RespawnAnchorBlock> copy = std::make_shared<RespawnAnchorBlock>();
  copy->charges = charges;
  return copy;
}