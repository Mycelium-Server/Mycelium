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

#pragma once

#include <map>
#include <mutex>

#include "../location.h"
#include "chunk.h"
#include "generation/world_generator.h"

class World {// TODO: to do
 public:
  World();
  ~World();

 public:
  static int getChunkPosition(double);
  static int getChunkPositionI(int);
  static ChunkLocation getChunkLocation(const BlockPosition& position);
  static ChunkLocation getChunkLocation(const EntityPosition& position);

 public:
  std::map<unsigned long long, Chunk*>::iterator getChunkIterator(const ChunkLocation&);
  [[nodiscard]] Chunk* getChunkByBlock(int x, int y);
  [[nodiscard]] Chunk* getChunk(const ChunkLocation&);
  Chunk* requireChunk(const ChunkLocation&);
  bool setBlock(int, int, int, int);
  int getBlock(int, int, int);
  bool setBlock(const Vector3i&, int);
  int getBlock(const Vector3i&);
  Chunk* createChunk(const ChunkLocation&);
  void destroyChunk(const ChunkLocation&);
  void createSpawnChunks();
  WorldGenerator* getWorldGenerator();
  void setWorldGenerator(WorldGenerator*);

 public:
  std::mutex chunksMutex;
  std::map<unsigned long long, Chunk*> chunks;

 private:
  WorldGenerator* worldGenerator = nullptr;
};