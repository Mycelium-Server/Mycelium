#ifndef MYCELIUM_PACKETOUTSPAWNPOSITION_H
#define MYCELIUM_PACKETOUTSPAWNPOSITION_H

#include "AbstractPacket.h"

class PacketOutSpawnPosition : public PacketOut {
public:
    PacketOutSpawnPosition() = default;

public:
    void encode(ByteBuffer &buf) override {
        buf.writeLong(location.l);
        buf.writeFloat(angle);
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x4B;
    }

public:
    Location_t location{};
    float angle = 0;

};

#endif //MYCELIUM_PACKETOUTSPAWNPOSITION_H
