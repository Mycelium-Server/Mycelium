#ifndef MYCELIUM_CHUNKSECTION_H
#define MYCELIUM_CHUNKSECTION_H

#include <cmath>
#include "BlockState.h"
#include "BlockStorage.h"
#include "BiomeStorage.h"

class ChunkSection {
public:
    ChunkSection() : ChunkSection(0) {}
    explicit ChunkSection(int index) : index(index) {
        for(int i = 0; i < 4*4*4; i++) biomes[i] = Biome(0);
        block_storage = std::make_shared<BlockStorage>();
    }

public:
    void set_block(int x, int y, int z, const Block& block) {
        Block prev = block_storage->get(x, y, z);
        if(prev.air && block.solid) block_count++;
        else if(prev.solid && block.air) block_count--;
        block_storage->set(x, y, z, block);
    }

    Block get_block(int x, int y, int z) {
        return block_storage->get(x, y, z);
    }

    void set_biome(int x, int y, int z, const Biome& biome) {
        biomes[y << 4 | z << 2 | x] = biome;
    }

    Biome get_biome(int x, int y, int z) {
        return biomes[y << 4 | z << 2 | x];
    }

    void set_biome_by_block(int x, int y, int z, const Biome& biome) {
        set_biome(floor(double(x) / 4.0), floor(double(y) / 4.0), floor(double(z) / 4.0), biome);
    }

    Biome get_biome_by_block(int x, int y, int z) {
        return get_biome(floor(double(x) / 4.0), floor(double(y) / 4.0), floor(double(z) / 4.0));
    }

    void write(ByteBuffer& buf) {
        packet_log << "> Block Count: " << block_count << "\n";

        buf.writeUnsignedShort((unsigned short)block_count);
        block_storage->write(buf);
        ensure_biome_created();
        biome_storage->write(buf);
    }

    void ensure_biome_created() {
        if(!biome_storage) {
            biome_storage = std::make_shared<BiomeStorage>();
            for(int biomeIndex = 0; biomeIndex < 4*4*4; ++biomeIndex) {
                biome_storage->set(biomeIndex, biomes[biomeIndex]);
            }
        }
    }

    int get_data_length() {
        int data_length = block_storage->get_data_length();
        data_length += 2;
        ensure_biome_created();
        data_length += biome_storage->get_data_length();
        return data_length;
    }

public:
    int block_count = 0;
    Biome biomes[4*4*4];
    std::shared_ptr<BiomeStorage> biome_storage;
    std::shared_ptr<BlockStorage> block_storage;
    int index;

};

#endif //MYCELIUM_CHUNKSECTION_H
