#ifndef MYCELIUM_CHUNK_H
#define MYCELIUM_CHUNK_H

#include "ChunkSection.h"

class Chunk {
public:
    Chunk() = default;

public:
    ChunkSection& get_chunk_section(int y) {
        return sections[y >> 4];
    }

    void set_block(int x, int y, int z, BlockState state) {
        get_chunk_section(y).set_block(x, y & 0xF, z, state);
    }

    BlockState get_block(int x, int y, int z) {
        return get_chunk_section(y).get_block(x, y & 0xF, z);
    }

    void set_biome_by_block(int x, int y, int z, int biome) {
        get_chunk_section(y).set_biome_from_block(x, y & 0xF, z, biome);
    }

    int get_biome_by_block(int x, int y, int z) {
        get_chunk_section(y).get_biome_from_block(x, y & 0xF, z);
    }

public:
    int chunk_x;
    int chunk_z;
    ChunkSection sections[16]{};
};

#endif //MYCELIUM_CHUNK_H
