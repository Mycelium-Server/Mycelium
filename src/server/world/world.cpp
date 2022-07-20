#include <cmath>
#include "world.h"

World::World() = default;
World::~World() {
    auto it = chunks.begin();
    while (it != chunks.end()) {
        delete it->second;
        it++;
    }
}

int World::getChunkPosition(int block) {
    return std::floor(double(block) / 16.0);
}

ChunkLocation World::getChunkLocation(const ProtocolPosition& position) {
    return { getChunkPosition(position.x), getChunkPosition(position.z) };
}

Chunk* World::getChunkByBlock(int x, int z) {
    return getChunk({ getChunkPosition(x), getChunkPosition(z) });
}

Chunk* World::getChunk(const ChunkLocation& location) {
    auto it = getChunkIterator(location);
    if (it == chunks.end()) {
        return nullptr;
    }
    return it->second;
}

std::map<unsigned long long, Chunk *>::iterator
        World::getChunkIterator(const ChunkLocation& location) {
    return chunks.find((unsigned long long) location.x << 32 | location.z);
}

bool World::setBlock(int x, int y, int z, int id) {
    if (y < -64 || y >= 360) {
        return false;
    }
    Chunk* chunk = getChunkByBlock(x, z);
    if (!chunk) {
        return false;
    }
    int localX = x % 16;
    int localY = y % 16;
    int localZ = z % 16;
    if (localX < 0) localX += 16;
    if (localY < 0) localY += 16;
    if (localZ < 0) localZ += 16;
    chunk->getSectionByY(y)->setBlock(localX, localY, localZ, id);
    return true;
}

int World::getBlock(int x, int y, int z) {
    if (y < -64 || y >= 360) {
        return 0;
    }
    Chunk* chunk = getChunkByBlock(x, z);
    if (!chunk) {
        return false;
    }
    return chunk->getSectionByY(y)->getBlock(x % 16, y % 16, z % 16);
}

void World::createChunk(const ChunkLocation& location) {
    chunks[(unsigned long long) location.x << 32 | location.z] = new Chunk(location);
}

void World::destroyChunk(const ChunkLocation& location) {
    auto it = getChunkIterator(location);
    delete it->second;
    chunks.erase(it);
}

void World::createSpawnChunks() {
    for (int x = -3; x < 3; x++) {
        for (int z = -3; z < 3; z++) {
            createChunk({ x, z });
        }
    }
}


