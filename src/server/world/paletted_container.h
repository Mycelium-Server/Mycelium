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

#include <vector>

#include "../../byte_buffer.h"
#include "palette.h"

class PalettedContainer {
 public:
  PalettedContainer(Palette*, std::vector<unsigned short>);
  ~PalettedContainer();

 public:
  [[nodiscard]] std::vector<unsigned short> getData() const;
  void setData(std::vector<unsigned short>);
  Palette* getPalette();
  void setPalette(Palette*);
  std::vector<unsigned long long> remap();
  void write(ByteBuffer&);

 private:
  Palette* palette;
  std::vector<unsigned short> data;
  bool dirty = true;
  std::vector<unsigned long long> cache;
};