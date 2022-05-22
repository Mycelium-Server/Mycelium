#ifndef MYCELIUM_PACKETOUTJOINGAME_H
#define MYCELIUM_PACKETOUTJOINGAME_H

#include "AbstractPacket.h"
#include "../NBT.h"

class PacketOutJoinGame : public PacketOut {
public:
    PacketOutJoinGame() = default;

public:
    void encode(ByteBuffer& buf) override {
        ByteBuffer tmp;
        buf.writeInt(entity_id);
        buf.writeBoolean(is_hardcore);
        buf.writeUnsignedByte(gamemode);
        buf.writeByte(previous_gamemode);
        buf.writeVarInt(world_count);
        for(const std::string& name : dimension_names)
            buf.writeString(name);
        tmp = dimension_codec->asByteBuffer(); buf.writeByteBuffer(tmp);
        tmp = dimension->asByteBuffer(); buf.writeByteBuffer(tmp);
        buf.writeString(dimension_name);
        buf.writeLong(hashed_seed);
        buf.writeVarInt(max_players);
        buf.writeVarInt(view_distance);
        buf.writeVarInt(simulation_distance);
        buf.writeBoolean(reduced_debug_info);
        buf.writeBoolean(enable_respawn_screen);
        buf.writeBoolean(is_debug);
        buf.writeBoolean(is_flat);
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x26;
    }

public:
    int entity_id;
    bool is_hardcore;
    unsigned char gamemode;
    signed char previous_gamemode;
    int world_count;
    std::vector<std::string> dimension_names;
    std::shared_ptr<TAG_Compound> dimension_codec;
    std::shared_ptr<TAG_Compound> dimension;
    std::string dimension_name;
    long hashed_seed;
    int max_players;
    int view_distance;
    int simulation_distance;
    bool reduced_debug_info;
    bool enable_respawn_screen;
    bool is_debug;
    bool is_flat;

};

#endif //MYCELIUM_PACKETOUTJOINGAME_H
