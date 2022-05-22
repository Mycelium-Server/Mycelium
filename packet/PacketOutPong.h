#ifndef MYCELIUM_PACKETOUTPONG_H
#define MYCELIUM_PACKETOUTPONG_H

#include "AbstractPacket.h"

class PacketOutPong : public PacketOut {
public:
    PacketOutPong() = default;

public:
    void encode(ByteBuffer& buf) override {
        buf.writeLong(payload);
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x01;
    }

public:
    long payload = 0;
};

#endif //MYCELIUM_PACKETOUTPONG_H
