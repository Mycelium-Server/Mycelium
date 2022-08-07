/*
 * Mycelium
 * Copyright (C) 2022  JNNGL
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

#include "world.h"

#include <cmath>

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
  return {getChunkPosition(position.x), getChunkPosition(position.z)};
}

ChunkLocation World::getChunkLocation(const ProtocolPosition& position) {
  return {getChunkPositioni(position.x), getChunkPositioni(position.z)};
}

Chunk* World::getChunkByBlock(int x, int z) {
  return getChunk({getChunkPosition(x), getChunkPosition(z)});
}

Chunk* World::getChunk(const ChunkLocation& location) {
  auto it = getChunkIterator(location);
  if (it == chunks.end()) {
    return nullptr;
  }
  return it->second;
}

std::map<unsigned long long, Chunk*>::iterator
World::getChunkIterator(const ChunkLocation& location) {
  return chunks.find((unsigned long long) location.x << 32 | (unsigned) location.z);
}

bool World::setBlock(int x, int y, int z, int id) {
  if (y < -64 || y >= 360) {
    return false;
  }
  Chunk* chunk = requireChunk({getChunkPositioni(x), getChunkPositioni(z)});
  if (!chunk) {
    return false;
  }
  int localX = x % 16;
  int localY = y % 16;
  int localZ = z % 16;
  if (localX < 0)
    localX += 16;
  if (localY < 0)
    localY += 16;
  if (localZ < 0)
    localZ += 16;
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
  chunks[(unsigned long long) location.x << 32 | (unsigned) location.z] = chunk;
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
  for (int x = -12; x <= 12; x++) {
    for (int z = -12; z <= 12; z++) {
      createChunk({x, z});
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
  auto it = chunks.find((unsigned long long) location.x << 32 | (unsigned) location.z);
  if (it != chunks.end()) {
    return it->second;
  } else {
    return createChunk(location);
  }
}
