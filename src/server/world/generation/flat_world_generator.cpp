#include "flat_world_generator.h"

FlatWorldGenerator::FlatWorldGenerator() = default;
FlatWorldGenerator::~FlatWorldGenerator() = default;

void FlatWorldGenerator::generateChunk(Chunk* chunk) {
    for (int x = 0; x < 16; x++) {
        for (int z = 0; z < 16; z++) {
            chunk->setBlock(x, 4, z, 9);
            chunk->setBlock(x, 3, z, 1);
            chunk->setBlock(x, 2, z, 1);
            chunk->setBlock(x, 1, z, 1);
            chunk->setBlock(x, 0, z, 74);
        }
    }
}