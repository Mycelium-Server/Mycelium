#pragma once

#include "world_generator.h"

class NoiseWorldGenerator : public WorldGenerator {
 public:
  NoiseWorldGenerator();
  explicit NoiseWorldGenerator(int);
  ~NoiseWorldGenerator() override;

 public:
  void generateChunk(Chunk*) override;
  void setSeed(int);
  [[nodiscard]] int getSeed() const;

 private:
  int seed;
};