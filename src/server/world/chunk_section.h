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
  int blocks[4096] = {};
  int biomes[64] = {};
  std::set<short> blockPalette {};
  std::set<short> biomePalette {};
};