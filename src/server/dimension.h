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

#pragma once

#include <string>

#include "../NBT.h"

class World;

struct Dimension {
  std::string name;
  std::string type;
  int64_t seed;
  bool isFlat;
  bool isDebug;
  World* world;
};

enum Dimensions {
  OVERWORLD = 0,
  THE_NETHER = 1,
  THE_END = 2
};

const extern std::vector<Dimension> m_default_dimensions;