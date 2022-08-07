#pragma once

#include "../chunk.h"

class WorldGenerator {
 public:
  WorldGenerator();
  virtual ~WorldGenerator();

 public:
  virtual void generateChunk(Chunk*) = 0;
};