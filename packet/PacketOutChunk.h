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
        packet_log.open("packet-log.txt", std::fstream::out);

        buf.writeInt(chunk.chunk_x);
        buf.writeInt(chunk.chunk_z);

        packet_log << "!=============== Chunk Data And Light ===============!\n";
        packet_log << "Chunk X: " << chunk.chunk_x << "\n";
        packet_log << "Chunk Z: " << chunk.chunk_z << "\n";

        BitStorage surface(9, 256);
        BitStorage motion_blocking(9, 256);

        for(int y = 0; y < 384; ++y) {
            for(int x = 0; x < 16; ++x) {
                for(int z = 0; z < 16; ++z) {
                    Block block = chunk.get_block(x, y, z);
                    if(!block.air) {
                        surface.set(x + (z << 4), y+1);
                    }
                    if(block.motion_blocking) {
                        motion_blocking.set(x + (z << 4), y+1);
                    }
                }
            }
        }

        ByteBuffer heightmap = TAG_Compound(NBT_Components {
            std::make_shared<TAG_Long_Array>("MOTION_BLOCKING",
                                             motion_blocking.get_data().size(), motion_blocking.get_data().data()),
            std::make_shared<TAG_Long_Array>("MOTION_BLOCKING_NO_LEAVES",
                                             motion_blocking.get_data().size(), motion_blocking.get_data().data()),
            std::make_shared<TAG_Long_Array>("WORLD_SURFACE",
                                             surface.get_data().size(), surface.get_data().data()),
            std::make_shared<TAG_Long_Array>("OCEAN_FLOOR",
                                             motion_blocking.get_data().size(), motion_blocking.get_data().data()),
        }).asByteBuffer();

        packet_log << "Heightmap->Surface: ";
        for(long long l : surface.get_data()) packet_log << l << " ";
        packet_log << "\n";

        packet_log << "Heightmap->Motion Blocking: ";
        for(long long l : motion_blocking.get_data()) packet_log << l << " ";
        packet_log << "\n";

        buf.writeByteBuffer(heightmap);

        ByteBuffer data;
        for(int i = 23; i >= 0; i--) {
            auto section = chunk.sections[i];
            packet_log << "Chunk Section #" << section->index << "\n";
            section->write(data);
        }

        packet_log << "Number Of Block Entities: 0\nTrust Edges: true\nSky Light Mask: 0\nBlock Light Mask: 0\nEmpty Sky Light Mask: 0\nSky Light Array count: 0\nBlock Light Array count: 0\n";

        buf.writeVarInt(data.bytes.size());
        buf.writeByteBuffer(data);
        buf.writeVarInt(0);
        buf.writeBoolean(true);
        buf.writeByte(0);
        buf.writeByte(0);
        buf.writeByte(0);
        buf.writeByte(0);
        buf.writeVarInt(0);
        buf.writeVarInt(0);

        packet_log << "\n!================================== RAW DATA ==================================!\n";
        int i = 0;
        for(byte_t b : buf.bytes) {
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

};

#endif //MYCELIUM_PACKETOUTCHUNK_H
