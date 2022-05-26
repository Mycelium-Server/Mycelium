#ifndef MYCELIUM_PACKETOUTINITIALIZEWORLDBORDER_H
#define MYCELIUM_PACKETOUTINITIALIZEWORLDBORDER_H

#include "AbstractPacket.h"

class PacketOutInitializeWorldBorder : public PacketOut {
public:
    PacketOutInitializeWorldBorder() = default;

public:
    void encode(ByteBuffer &buf) override {
        buf.writeDouble(x);
        buf.writeDouble(z);
        buf.writeDouble(old_diameter);
        buf.writeDouble(new_diameter);
        buf.writeVarLong(speed);
        buf.writeVarInt(portal_teleport_boundary);
        buf.writeVarInt(warning_blocks);
        buf.writeVarInt(warning_time);
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x20;
    }

public:
    double x = 0;
    double z = 0;
    double old_diameter = 0;
    double new_diameter = 0;
    long speed = 0;
    int portal_teleport_boundary = 0;
    int warning_blocks = 0;
    int warning_time = 0;

    constexpr const static int DEFAULT_PORTAL_TELEPORT_BOUNDARY = 29999984;

};

#endif //MYCELIUM_PACKETOUTINITIALIZEWORLDBORDER_H
