#pragma once

#include "region_location.h"
#include "../world.h"

class AnvilRegion {
 public:
  AnvilRegion(const RegionLocation&, World*);
  AnvilRegion(const RegionLocation&, ByteBuffer&);
  AnvilRegion(const RegionLocation&, const std::string&);

 public:
  void save(ByteBuffer&);
  void save(const std::string&);
  Chunk* loadChunk(const ChunkLocation&);

// private:
//  AnvilLocationTable* locationTable;
//  AnvilTimestampTable* timestampTable;
};