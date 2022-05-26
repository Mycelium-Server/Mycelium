#ifndef MYCELIUM_CHUNK_H
#define MYCELIUM_CHUNK_H

#include "ChunkSection.h"

class Chunk {
public:
    Chunk() {
        for(int i = 0; i < 24; i++) sections[i] = std::make_shared<ChunkSection>(i);
    }
    Chunk(int chunk_x, int chunk_z) : chunk_x(chunk_x), chunk_z(chunk_z) {
        for(int i = 0; i < 24; i++) sections[i] = std::make_shared<ChunkSection>(i);
    }

public:
    std::shared_ptr<ChunkSection> get_chunk_section(int y) {
        return sections[(int)floor(double(y)/16.0)];
    }

    void set_block(int x, int y, int z, Block state) {
        get_chunk_section(y)->set_block(x, y % 16, z, state);
    }

    Block get_block(int x, int y, int z) {
        return get_chunk_section(y)->get_block(x, y % 16, z);
    }

    void set_biome_by_block(int x, int y, int z, const Biome& biome) {
        get_chunk_section(y)->set_biome_by_block((int)floor((double)x/4),
                                                (int)floor((double)y/4) % 16,
                                                (int)floor((double)z/4), biome);
    }

    Biome get_biome_by_block(int x, int y, int z) {
        return get_chunk_section(y)->get_biome_by_block((int)floor((double)x/4),
                                                       (int)floor((double)y/4) % 16,
                                                       (int)floor((double)z/4));
    }

    void set_biome(int x, int y, int z, const Biome& biome) {
        get_chunk_section(y*4)->set_biome(x, y % 16, z, biome);
    }

    Biome get_biome(int x, int y, int z) {
        return get_chunk_section(y*4)->get_biome(x, y % 16, z);
    }

    [[nodiscard]] int get_chunk_x() const {
        return chunk_x;
    }

    [[nodiscard]] int get_chunk_z() const {
        return chunk_z;
    }

public:
    int chunk_x = 0;
    int chunk_z = 0;
    std::shared_ptr<ChunkSection> sections[24];
};

#endif //MYCELIUM_CHUNK_H
