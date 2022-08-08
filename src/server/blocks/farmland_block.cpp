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


#include "farmland_block.h"

FarmlandBlock::FarmlandBlock() = default;
FarmlandBlock::~FarmlandBlock() = default;

short FarmlandBlock::getId() const {
  if (moisture == MOISTURE_0) return 3620;
  if (moisture == MOISTURE_1) return 3621;
  if (moisture == MOISTURE_2) return 3622;
  if (moisture == MOISTURE_3) return 3623;
  if (moisture == MOISTURE_4) return 3624;
  if (moisture == MOISTURE_5) return 3625;
  if (moisture == MOISTURE_6) return 3626;
  if (moisture == MOISTURE_7) return 3627;
  return 3620;
}

std::shared_ptr<Block> FarmlandBlock::clone() const {
  std::shared_ptr<FarmlandBlock> copy = std::make_shared<FarmlandBlock>();
  copy->moisture = moisture;
  return copy;
}
