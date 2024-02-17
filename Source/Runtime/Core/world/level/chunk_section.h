#pragma once

#include <set>

#include "paletted_container.h"

class ChunkSection {
 public:
  ChunkSection();
  ~ChunkSection();

 public:
  [[nodiscard]] short getTotalBlock() const;
  void setBlock(uint8_t, uint8_t, uint8_t, int);
  int getBlock(uint8_t, uint8_t, uint8_t);
  [[nodiscard]] int getBlockBitsPerEntry() const;
  [[nodiscard]] int getBiomeBitsPerEntry() const;
  [[nodiscard]] Palette* createBlockPalette() const;
  [[nodiscard]] Palette* createBiomePalette() const;
  [[nodiscard]] PalettedContainer* createBlockContainer() const;
  [[nodiscard]] PalettedContainer* createBiomeContainer() const;
  void write(ByteBuffer&) const;

 private:
  short totalBlocks = 0;
  uint16_t blocks[4096] = {};
  uint16_t biomes[64] = {};
  std::set<uint16_t> blockPalette {0};
  std::set<uint16_t> biomePalette {0};
};

extern const ChunkSection* EMPTY_CHUNK_SECTION;