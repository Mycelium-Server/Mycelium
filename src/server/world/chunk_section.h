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

#include <set>

#include "paletted_container.h"

class ChunkSection {
 public:
  ChunkSection();
  ~ChunkSection();

 public:
  void setBlock(unsigned char, unsigned char, unsigned char, int);
  int getBlock(unsigned char, unsigned char, unsigned char);
  [[nodiscard]] int getBlockBitsPerEntry() const;
  [[nodiscard]] int getBiomeBitsPerEntry() const;
  [[nodiscard]] Palette* createBlockPalette() const;
  [[nodiscard]] Palette* createBiomePalette() const;
  [[nodiscard]] PalettedContainer* createBlockContainer() const;
  [[nodiscard]] PalettedContainer* createBiomeContainer() const;
  void write(ByteBuffer&) const;

 private:
  short totalBlocks = 0;
  unsigned short blocks[4096] = {};
  unsigned short biomes[64] = {};
  std::set<unsigned short> blockPalette {0};
  std::set<unsigned short> biomePalette {0};
};