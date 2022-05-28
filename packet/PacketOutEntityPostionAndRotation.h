#ifndef MYCELIUM_PACKETOUTENTITYPOSTIONANDROTATION_H
#define MYCELIUM_PACKETOUTENTITYPOSTIONANDROTATION_H

#include "AbstractPacket.h"

class PacketOutEntityPositionAndRotation : public PacketOut {
public:
    PacketOutEntityPositionAndRotation() = default;

public:
    void encode(ByteBuffer &buf) override {
        buf.writeVarInt(entity_id);
        buf.writeShort(delta_x);
        buf.writeShort(delta_y);
        buf.writeShort(delta_z);
        buf.writeByte(yaw);
        buf.writeByte(pitch);
        buf.writeBoolean(on_ground);
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x2A;
    }

public:
    int entity_id = 0;
    short delta_x = 0;
    short delta_y = 0;
    short delta_z = 0;
    byte_t yaw = 0;
    byte_t pitch = 0;
    bool on_ground = false;
};

#endif //MYCELIUM_PACKETOUTENTITYPOSTIONANDROTATION_H
