#pragma once

#include "chunk.h"
#include <map>

class World { // TODO: to do
public:
    World();
    ~World();

public:
    static int getChunkPosition(int);
    std::map<unsigned long long, Chunk*>::iterator getChunkIterator(const ChunkLocation&);
    [[nodiscard]] Chunk* getChunkByBlock(int x, int y);
    [[nodiscard]] Chunk* getChunk(const ChunkLocation&);
    bool setBlock(int, int, int, int);
    int getBlock(int, int, int);
    void createChunk(const ChunkLocation&);
    void destroyChunk(const ChunkLocation&);
    void createSpawnChunks();

public:
    std::map<unsigned long long, Chunk*> chunks;

};