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
  static World* getByID(uint32_t id);
  static int getChunkPosition(double);
  static int getChunkPositionI(int);

 public:
  ChunkLocation getChunkLocation(const BlockPosition& position);
  ChunkLocation getChunkLocation(const EntityPosition& position);
  std::map<uint64_t, Chunk*>::iterator getChunkIterator(const ChunkLocation&);
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
  uint32_t getID();

 public:
  std::mutex chunksMutex;
  std::map<uint64_t, Chunk*> chunks;

 private:
  WorldGenerator* worldGenerator = nullptr;
  uint32_t id;
};