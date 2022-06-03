#ifndef MYCELIUM_PACKETOUTCHUNK_H
#define MYCELIUM_PACKETOUTCHUNK_H

#include <fstream>
#include <sstream>
#include "AbstractPacket.h"
#include "../NBT.h"
#include "../Chunk.h"

std::string hexStr(byte_t data){
    std::stringstream ss;
    ss<<std::hex;
    ss<<(int)data;
    return ss.str();
}

class PacketOutChunk : public PacketOut {
public:
    PacketOutChunk() = default;

public:
    void encode(ByteBuffer &buf) override {
        buf.writeByteBuffer(cache);
    }

    void cache_data() {
        packet_log.open("packet-log.txt", std::fstream::out);

        cache.writeInt(chunk.chunk_x);
        cache.writeInt(chunk.chunk_z);

        packet_log << "!=============== Chunk Data And Light ===============!\n";
        packet_log << "Chunk X: " << chunk.chunk_x << "\n";
        packet_log << "Chunk Z: " << chunk.chunk_z << "\n";

        BitStorage motion_blocking(9, 256);

        for(int y = 0; y < 384; ++y) {
            for(int x = 0; x < 16; ++x) {
                for(int z = 0; z < 16; ++z) {
                    Block block = chunk.get_block(x, y, z);
                    if(block.motion_blocking) {
                        motion_blocking.set(x + (z << 4), y+1);
                    }
                }
            }
        }

        ByteBuffer heightmap = TAG_Compound(NBT_Components {
                std::make_shared<TAG_Long_Array>("MOTION_BLOCKING",
                                                 motion_blocking.get_data().size(), motion_blocking.get_data().data())
        }).asByteBuffer();

        packet_log << "Heightmap->Motion Blocking: ";
        for(long long l : motion_blocking.get_data()) packet_log << l << " ";
        packet_log << "\n";

        cache.writeByteBuffer(heightmap);

        ByteBuffer data;
        for(auto& section : chunk.sections) {
            packet_log << "Chunk Section #" << section->index << "\n";
            section->write(data);
        }

        packet_log << "Number Of Block Entities: 0\nTrust Edges: true\nSky Light Mask: 0\nBlock Light Mask: 0\nEmpty Sky Light Mask: 0\nSky Light Array count: 0\nBlock Light Array count: 0\n";

        cache.writeVarInt(data.bytes.size());
        cache.writeByteBuffer(data);
        cache.writeVarInt(0);
        cache.writeBoolean(true);
        cache.writeByte(0);
        cache.writeByte(0);
        cache.writeByte(0);
        cache.writeByte(0);
        cache.writeVarInt(0);
        cache.writeVarInt(0);

        packet_log << "\n!================================== RAW DATA ==================================!\n";
        int i = 0;
        for(byte_t b : cache.bytes) {
            packet_log << hexStr(b) << " ";
            i++;
            if(i%32 == 0) packet_log << "\n";
        }
        packet_log.close();
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x22;
    }

public:
    Chunk chunk;
    ByteBuffer cache;

};

#endif //MYCELIUM_PACKETOUTCHUNK_H
