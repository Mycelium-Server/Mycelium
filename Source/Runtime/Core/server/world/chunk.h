#pragma once

#include "chunk_section.h"
#include "heightmap.h"

class World;

struct ChunkLocation {
  World* world = nullptr;
  int x = 0;
  int z = 0;

  void fromID(uint64_t id);
  [[nodiscard]] uint64_t getID() const;
};

class Chunk {
 public:
  Chunk(int, int);
  explicit Chunk(const ChunkLocation&);
  ~Chunk();

 public:
  void setBlock(int, int, int, int);
  [[nodiscard]] int getBlock(int, int, int);
  [[nodiscard]] ChunkSection* getSectionByY(int);
  [[nodiscard]] int getAbsoluteX(int) const;
  [[nodiscard]] int getAbsoluteZ(int) const;
  [[nodiscard]] Heightmap* createHeightmap() const;
  [[nodiscard]] World* getOwner();
  void setOwner(World*);
  void write(ByteBuffer&) const;

 public:
  ChunkLocation location;
  ChunkSection* sections[24] {};
};