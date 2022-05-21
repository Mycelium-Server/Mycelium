#ifndef MYCELIUM_PACKETOUTPONG_H
#define MYCELIUM_PACKETOUTPONG_H

#include "AbstractPacket.h"

class PacketOutPong : public PacketOut {
public:
    PacketOutPong() = default;

public:
    ByteBuffer encode() override {
        ByteBuffer buf;
        buf.writeLong(payload);
        return buf;
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x01;
    }

public:
    long payload = 0;
};

#endif //MYCELIUM_PACKETOUTPONG_H
