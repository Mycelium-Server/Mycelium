#pragma once

#include "chunk.h"
#include "../location.h"
#include <map>

class World { // TODO: to do
public:
    World();
    ~World();

public:
    static int getChunkPosition(double);
    static int getChunkPositioni(int);
    static ChunkLocation getChunkLocation(const ProtocolPosition& position);
    static ChunkLocation getChunkLocation(const Position3d& position);

public:
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