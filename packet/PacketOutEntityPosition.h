#ifndef MYCELIUM_PACKETOUTENTITYPOSITION_H
#define MYCELIUM_PACKETOUTENTITYPOSITION_H

#include "AbstractPacket.h"

class PacketOutEntityPosition : public PacketOut {
public:
    PacketOutEntityPosition() = default;

public:
    void encode(ByteBuffer &buf) override {
        buf.writeVarInt(entity_id);
        buf.writeShort(delta_x);
        buf.writeShort(delta_y);
        buf.writeShort(delta_z);
        buf.writeBoolean(on_ground);
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x29;
    }

public:
    int entity_id = 0;
    short delta_x = 0;
    short delta_y = 0;
    short delta_z = 0;
    bool on_ground = false;
};

#endif //MYCELIUM_PACKETOUTENTITYPOSITION_H
