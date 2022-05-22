#ifndef MYCELIUM_PACKETOUTCHUNK_H
#define MYCELIUM_PACKETOUTCHUNK_H

#include "AbstractPacket.h"
#include "../NBT.h"
#include "../Chunk.h"

class PacketOutChunk : public PacketOut {
public:
    PacketOutChunk() = default;

private:
    void encodeChunkSection(ChunkSection& section, ByteBuffer& buf) {
        std::shared_ptr<Palette> palette = section.palette;
        signed char bits_per_block = palette->get_bits_per_block();

        buf.writeByte(bits_per_block);
        palette->write(buf);

        int data_length = (16 * 16 * 16) * bits_per_block / 64;
        uint64_t* data = (uint64_t*)calloc(data_length, sizeof(uint64_t));

        uint32_t individual_value_mask = (uint32_t)((1 << bits_per_block) - 1);
        for(int y = 0; y < 16; y++) {
            for(int z = 0; z < 16; z++) {
                for(int x = 0; x < 16; x++) {
                    int block_num = (((y * 16) + z) * 16) + x;
                    int start_long = (block_num * bits_per_block) / 64;
                    int start_offset = (block_num * bits_per_block) % 64;
                    int end_long = ((block_num + 1) * bits_per_block - 1) / 64;

                    BlockState state = section.get_block(x, y, z);

                    uint64_t value = palette->id_for_state(state);
                    value &= individual_value_mask;

                    data[start_long] |= (value << start_offset);

                    if(start_long != end_long)
                        data[end_long] = (value >> (64 - start_offset));
                }
            }
        }

        buf.writeVarInt(data_length);
        for(int i = 0; i < data_length; i++) buf.writeLong((int64_t)data[i]);
        free(data);
    }

public:
    void encode(ByteBuffer &buf) override {
        buf.writeInt(chunk_x);
        buf.writeInt(chunk_z);

        long long* motion_blocking = (long long*)calloc(37, sizeof(long long));
        for(int i = 0; i < 36; i++) motion_blocking[i] = 100804020100804;
        motion_blocking[36] = 20100804;
        ByteBuffer tmp = TAG_Compound(NBT_Components {
                std::make_shared<TAG_Long_Array>("MOTION_BLOCKING", 37, motion_blocking)
        }).asByteBuffer();

        buf.writeByteBuffer(tmp);

        int mask = 0;
        ByteBuffer column_buffer;
        for(int sectionY = 0; sectionY < 16; sectionY++) {
            mask |= (1 << sectionY);
            encodeChunkSection(chunk.sections[sectionY], column_buffer);
        }
        for(int z = 0; z < 16; z++) {
            for(int x = 0; x < 16; x++) {
                column_buffer.writeInt(chunk.get_biome_by_block(x, 0, z));
            }
        }

        buf.writeVarInt((int)column_buffer.bytes.size());
        buf.writeByteBuffer(column_buffer);
        buf.writeVarInt(0);
        buf.writeBoolean(false);
        buf.writeByte(0);
        buf.writeByte(0);
        buf.writeByte(0);
        buf.writeByte(0);
        buf.writeVarInt(0);
        buf.writeVarInt(0);
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x22;
    }

public:
    int chunk_x = 0;
    int chunk_z = 0;
    Chunk chunk;

};

#endif //MYCELIUM_PACKETOUTCHUNK_H
