#ifndef MYCELIUM_PACKETOUTENTITYHEADLOOK_H
#define MYCELIUM_PACKETOUTENTITYHEADLOOK_H

#include "AbstractPacket.h"

class PacketOutEntityHeadLook : public PacketOut {
public:
    PacketOutEntityHeadLook() = default;

public:
    void encode(ByteBuffer &buf) override {
        buf.writeVarInt(entity_id);
        buf.writeByte(head_yaw);
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x3E;
    }

public:
    int entity_id = 0;
    byte_t head_yaw = 0;
};

#endif //MYCELIUM_PACKETOUTENTITYHEADLOOK_H
