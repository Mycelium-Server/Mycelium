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

#include "cave_vines_plant_block.h"

CaveVinesPlantBlock::CaveVinesPlantBlock() = default;
CaveVinesPlantBlock::~CaveVinesPlantBlock() = default;

short CaveVinesPlantBlock::getId() const {
  if (berries == BERRIES_TRUE) return 19711;
  if (berries == BERRIES_FALSE) return 19712;
  return 19712;
}
