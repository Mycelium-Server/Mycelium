#pragma once

#include "../chunk.h"

struct RegionLocation {
  int x = 0;
  int z = 0;

  static RegionLocation fromChunkLocation(const ChunkLocation& loc) {
    return {loc.x >> 5, loc.z >> 5};
  }
};