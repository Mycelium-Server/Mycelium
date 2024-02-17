
#include "world.h"

#include <cmath>
#include <thread>

static uint32_t worldCounter = 0;

static std::map<uint32_t, World*>& getWorldMap() {
  static std::map<uint32_t, World*> worlds;
  return worlds;
}

World::World() : id(worldCounter) {
  getWorldMap()[id] = this;
  ++worldCounter;
}

World::~World() {
  getWorldMap().erase(id);
  auto it = chunks.begin();
  while (it != chunks.end()) {
    delete it->second;
    it++;
  }
}

int World::getChunkPositionI(int block) {
  return getChunkPosition(double(block));
}

int World::getChunkPosition(double block) {
  return (int) std::floor(block / 16.0);
}

World* World::getByID(uint32_t id) {
  return getWorldMap()[id];
}

ChunkLocation World::getChunkLocation(const EntityPosition& position) {
  return {this, getChunkPosition(position.x), getChunkPosition(position.z)};
}

ChunkLocation World::getChunkLocation(const BlockPosition& position) {
  return {this, getChunkPositionI(position.x), getChunkPositionI(position.z)};
}

Chunk* World::getChunkByBlock(int x, int z) {
  return getChunk({this, getChunkPosition(x), getChunkPosition(z)});
}

Chunk* World::getChunk(const ChunkLocation& location) {
  auto it = getChunkIterator(location);
  if (it == chunks.end()) {
    return nullptr;
  }
  return it->second;
}

std::map<uint64_t, Chunk*>::iterator
World::getChunkIterator(const ChunkLocation& location) {
  return chunks.find(location.getID());
}

#define TO_LOCAL(x) x %= 16; if (x < 0) x += 16;

bool World::setBlock(int x, int y, int z, int id) {
  if (y < -64 || y >= 360) {
    return false;
  }
  Chunk* chunk = requireChunk({this, getChunkPositionI(x), getChunkPositionI(z)});
  if (!chunk) {
    return false;
  }
  TO_LOCAL(x)
  TO_LOCAL(z)
  chunk->setBlock(x, y, z, id);
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
  TO_LOCAL(x)
  TO_LOCAL(z)
  return chunk->getBlock(x, y, z);
}

#undef TO_LOCAL

bool World::setBlock(const Vector3i& pos, int state) {
  return setBlock(pos.x, pos.y, pos.z, state);
}

int World::getBlock(const Vector3i& pos) {
  return getBlock(pos.x, pos.y, pos.z);
}

Chunk* World::createChunk(const ChunkLocation& location) {
  auto* chunk = new Chunk(location);
  chunksMutex.lock();
  chunks[location.getID()] = chunk;
  chunksMutex.unlock();
  if (worldGenerator) {
    worldGenerator->generateChunk(chunk);
  }
  chunk->setOwner(this);
  return chunk;
}

void World::destroyChunk(const ChunkLocation& location) {
  auto it = getChunkIterator(location);
  delete it->second;
  chunksMutex.lock();
  chunks.erase(it);
  chunksMutex.unlock();
}

void World::createSpawnChunks() {
  std::thread threads[25];

  for (int x = -12; x <= 12; x++) {
    threads[x + 12] = std::thread([=]() {
      for (int z = -12; z <= 12; z++) {
        createChunk({this, x, z});
      }
    });
  }

  for (auto& t: threads) {
    t.join();
  }
}

WorldGenerator* World::getWorldGenerator() {
  return worldGenerator;
}

void World::setWorldGenerator(WorldGenerator* worldgen) {
  worldGenerator = worldgen;
}

Chunk* World::requireChunk(const ChunkLocation& location) {
  auto it = getChunkIterator(location);
  if (it != chunks.end()) {
    return it->second;
  } else {
    return createChunk(location);
  }
}


uint32_t World::getID() {
  return id;
}