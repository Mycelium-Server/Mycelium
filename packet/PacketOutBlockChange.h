#ifndef MYCELIUM_PACKETOUTBLOCKCHANGE_H
#define MYCELIUM_PACKETOUTBLOCKCHANGE_H

#include "AbstractPacket.h"

class PacketOutBlockChange : public PacketOut {
public:
    void encode(ByteBuffer &buf) override {
        buf.writeLong(chunk_section_position.position);
        printf("%lld \n", chunk_section_position.position);
        buf.writeBoolean(!trust_edges);
        buf.writeVarInt((int)blocks.size());
        for(changed_block& block : blocks) {
            buf.writeVarLong((int64_t)block.block_id << 12 | ((int64_t)(block.x % 15) << 8 | (int64_t)(block.z % 15) << 4 | (int64_t)(block.y % 15)));
            printf("%lld ", (int64_t)block.block_id << 12 | ((int64_t)(block.x % 15) << 8 | (int64_t)(block.z % 15) << 4 | (int64_t)(block.y % 15)));
        }
        printf("\n");

    }

    [[nodiscard]] int getPacketID() const override {
        return 0x3F;
    }

public:
    union chunk_section_position {
        struct {
            int64_t chunk_z : 22;
            int64_t section_y : 20;
            int64_t chunk_x : 22;
        };
        int64_t position;

        chunk_section_position() : chunk_section_position(0,0,0) {}
        chunk_section_position(int block_x, int block_y, int block_z)
        : chunk_x((int)floor(double(block_x)/16.0)),
          section_y((int)floor(double(block_y)/16.0)),
          chunk_z((int)floor(double(block_z)/16.0)) {}
    } chunk_section_position{};
    bool trust_edges;
    struct changed_block {
        int block_id;
        int x;
        int y;
        int z;

        changed_block() : changed_block(0,0,0,0) {}
        changed_block(int x, int y, int z, int block_id) : x(x), y(y), z(z), block_id(block_id) {}
    };
    std::vector<changed_block> blocks;

};

#endif //MYCELIUM_PACKETOUTBLOCKCHANGE_H
