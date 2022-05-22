#ifndef MYCELIUM_CHUNKSECTION_H
#define MYCELIUM_CHUNKSECTION_H

#include <cmath>
#include "BlockState.h"
#include "Palette.h"

class ChunkSection {
public:
    ChunkSection() {
        palette = get_palette(8);
        for(auto& block : blocks) {
            block = minecraft_void_air;
        }
        for(auto& biome : biomes) {
            biome = 127;
        }
    }

public:
    int get_block_index(int x, int y, int z) {
        return x + 16 * (y + 16 * z);
    }

    void set_block(int x, int y, int z, BlockState block) {
        blocks[x + 16 * (y + 16 * z)] = block;
    }

    BlockState get_block(int x, int y, int z) {
        return blocks[x + 16 * (y + 16 * z)];
    }

    void set_biome(int x, int y, int z, int biome) {
        biomes[x + 4 * (y + 4 * z)] = biome;
    }

    int get_biome(int x, int y, int z) {
        return biomes[x + 4 * (y + 4 * z)];
    }

    void set_biome_from_block(int x, int y, int z, int biome) {
        set_biome(floor(double(x) / 4.0), floor(double(y) / 4.0), floor(double(z) / 4.0), biome);
    }

    int get_biome_from_block(int x, int y, int z) {
        return get_biome(floor(double(x) / 4.0), floor(double(y) / 4.0), floor(double(z) / 4.0));
    }

public:
    BlockState blocks[16 * 16 * 16]{};
    int biomes[4 * 4 * 4]{};
    std::shared_ptr<Palette> palette;

};

#endif //MYCELIUM_CHUNKSECTION_H
