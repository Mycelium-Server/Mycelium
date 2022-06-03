#ifndef MYCELIUM_PACKETINPLAYERBLOCKPLACEMENT_H
#define MYCELIUM_PACKETINPLAYERBLOCKPLACEMENT_H

#include "AbstractPacket.h"

class PacketInPlayerBlockPlacement : public PacketIn {
public:
    void read(ByteBuffer &buf) override {
        hand = buf.readVarInt();
        block_position = Location_t(buf.readLong());
        face = buf.readVarInt();
        cursor_position_x = buf.readFloat();
        cursor_position_y = buf.readFloat();
        cursor_position_z = buf.readFloat();
        inside_block = buf.readBoolean();
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x2E;
    }

public:
    int hand;
    Location_t block_position;
    int face;
    float cursor_position_x;
    float cursor_position_y;
    float cursor_position_z;
    bool inside_block;

};

#endif //MYCELIUM_PACKETINPLAYERBLOCKPLACEMENT_H
