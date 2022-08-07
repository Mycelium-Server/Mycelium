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

#include "crimson_stem_block.h"

CrimsonStemBlock::CrimsonStemBlock() = default;
CrimsonStemBlock::~CrimsonStemBlock() = default;

short CrimsonStemBlock::getId() const {
  if (axis == AXIS_X) return 16184;
  if (axis == AXIS_Y) return 16185;
  if (axis == AXIS_Z) return 16186;
  return 16185;
}
