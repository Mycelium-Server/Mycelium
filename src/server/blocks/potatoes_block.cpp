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

#include "potatoes_block.h"

PotatoesBlock::PotatoesBlock() = default;
PotatoesBlock::~PotatoesBlock() = default;

short PotatoesBlock::getId() const {
  if (age == AGE_0) return 6931;
  if (age == AGE_1) return 6932;
  if (age == AGE_2) return 6933;
  if (age == AGE_3) return 6934;
  if (age == AGE_4) return 6935;
  if (age == AGE_5) return 6936;
  if (age == AGE_6) return 6937;
  if (age == AGE_7) return 6938;
  return 6931;
}
