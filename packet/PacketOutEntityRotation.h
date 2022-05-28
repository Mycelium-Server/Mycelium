#ifndef MYCELIUM_PACKETOUTENTITYROTATION_H
#define MYCELIUM_PACKETOUTENTITYROTATION_H

#include "AbstractPacket.h"

class PacketOutEntityRotation : public PacketOut {
public:
    PacketOutEntityRotation() = default;

public:
    void encode(ByteBuffer &buf) override {
        buf.writeVarInt(entity_id);
        buf.writeByte(yaw);
        buf.writeByte(pitch);
        buf.writeBoolean(on_ground);
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x2B;
    }

public:
    int entity_id = 0;
    byte_t yaw = 0;
    byte_t pitch = 0;
    bool on_ground = false;
};

#endif //MYCELIUM_PACKETOUTENTITYROTATION_H
