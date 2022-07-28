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

int World::getChunkPositioni(int block) {
    return getChunkPosition(double(block));
}

int World::getChunkPosition(double block) {
    return (int) std::floor(block / 16.0);
}

ChunkLocation World::getChunkLocation(const Position3d& position) {
    return { getChunkPosition(position.x), getChunkPosition(position.z) };
}

ChunkLocation World::getChunkLocation(const ProtocolPosition& position) {
    return { getChunkPositioni(position.x), getChunkPositioni(position.z) };
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

Chunk* World::createChunk(const ChunkLocation& location) {
    auto* chunk = new Chunk(location);
    chunks[(unsigned long long) location.x << 32 | location.z] = chunk;
    if (worldGenerator) {
        worldGenerator->generateChunk(chunk);
    }
    return chunk;
}

void World::destroyChunk(const ChunkLocation& location) {
    auto it = getChunkIterator(location);
    delete it->second;
    chunks.erase(it);
}

void World::createSpawnChunks() {
    for (int x = -50; x < 50; x++) {
        for (int z = -50; z < 50; z++) {
            createChunk({ x, z });
        }
    }
}

WorldGenerator* World::getWorldGenerator() {
    return worldGenerator;
}

void World::setWorldGenerator(WorldGenerator* worldgen) {
    worldGenerator = worldgen;
}

Chunk* World::requireChunk(const ChunkLocation& location) {
    auto it = chunks.find((unsigned long long) location.x << 32 | location.z);
    if (it != chunks.end()) {
        return it->second;
    } else {
        return createChunk(location);
    }
}

