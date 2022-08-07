#pragma once

#include "chunk_section.h"
#include "heightmap.h"

struct ChunkLocation {
  int x = 0, z = 0;
};

class Chunk {
 public:
  Chunk(int, int);
  explicit Chunk(const ChunkLocation&);
  ~Chunk();

 public:
  void setBlock(int, int, int, int) const;
  int getBlock(int, int, int) const;
  ChunkSection* getSectionByY(int) const;
  [[nodiscard]] int getAbsoluteX(int) const;
  [[nodiscard]] int getAbsoluteZ(int) const;
  [[nodiscard]] Heightmap* createHeightmap() const;
  void write(ByteBuffer&) const;

 public:
  ChunkLocation location;
  ChunkSection** sections;
};