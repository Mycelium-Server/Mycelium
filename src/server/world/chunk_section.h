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