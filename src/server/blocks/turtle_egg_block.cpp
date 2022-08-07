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

#include "turtle_egg_block.h"

TurtleEggBlock::TurtleEggBlock() = default;
TurtleEggBlock::~TurtleEggBlock() = default;

short TurtleEggBlock::getId() const {
  if (eggs == EGGS_1 && hatch == HATCH_0) return 10379;
  if (eggs == EGGS_1 && hatch == HATCH_1) return 10380;
  if (eggs == EGGS_1 && hatch == HATCH_2) return 10381;
  if (eggs == EGGS_2 && hatch == HATCH_0) return 10382;
  if (eggs == EGGS_2 && hatch == HATCH_1) return 10383;
  if (eggs == EGGS_2 && hatch == HATCH_2) return 10384;
  if (eggs == EGGS_3 && hatch == HATCH_0) return 10385;
  if (eggs == EGGS_3 && hatch == HATCH_1) return 10386;
  if (eggs == EGGS_3 && hatch == HATCH_2) return 10387;
  if (eggs == EGGS_4 && hatch == HATCH_0) return 10388;
  if (eggs == EGGS_4 && hatch == HATCH_1) return 10389;
  if (eggs == EGGS_4 && hatch == HATCH_2) return 10390;
  return 10379;
}
