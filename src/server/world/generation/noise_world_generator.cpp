/*
 * Mycelium
 * Copyright (C) 2022 - 2023  JNNGL
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "noise_world_generator.h"

#include "../../block/bedrock_block.h"
#include "../../block/dirt_block.h"
#include "../../block/grass_block.h"
#include "../../block/grass_block_block.h"
#include "noise/noise.h"

NoiseWorldGenerator::NoiseWorldGenerator()
    : seed(rand()) {}

NoiseWorldGenerator::NoiseWorldGenerator(int seed)
    : seed(seed) {}

NoiseWorldGenerator::~NoiseWorldGenerator() = default;

void NoiseWorldGenerator::generateChunk(Chunk* chunk) {
  static const int dirt = DirtBlock().getId();
  static const int bedrock = BedrockBlock().getId();
  static const int grassBlock = GrassBlockBlock().getId();
  static const int grass = GrassBlock().getId();

  for (int z = 0; z < 16; z++) {
    for (int x = 0; x < 16; x++) {
      int globalX = chunk->location.x * 16 + x;
      int globalZ = chunk->location.z * 16 + z;

      int y = int(terrainNoise(double(globalX) / 128 - 0.5, double(globalZ) / 128 - 0.5, seed) * 20 + 50);
      chunk->setBlock(x, 0, z, bedrock);
      for (int d = 1; d < y; d++) {
        chunk->setBlock(x, d, z, dirt);
      }
      chunk->setBlock(x, y, z, grassBlock);

      if (rand() % 6 == 0) {
        chunk->setBlock(x, y + 1, z, grass);
      }
    }
  }
}

void NoiseWorldGenerator::setSeed(int value) {
  seed = value;
}

int NoiseWorldGenerator::getSeed() const {
  return seed;
}
