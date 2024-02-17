#pragma once

#include "world_generator.h"

class FlatWorldGenerator : public WorldGenerator {
 public:
  FlatWorldGenerator();
  ~FlatWorldGenerator() override;

 public:
  void generateChunk(Chunk*) override;
};