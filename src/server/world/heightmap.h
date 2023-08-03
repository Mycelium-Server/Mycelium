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

#pragma once

#include "../../byte_buffer.h"

class Heightmap {
 public:
  Heightmap();
  ~Heightmap();

 public:
  short next();
  void resetIndex();
  void set(short);
  void write(ByteBuffer&);

 public:
  uint64_t data[37] {};

 private:
  int currentLong = 0;
  int currentBit = 1;
};