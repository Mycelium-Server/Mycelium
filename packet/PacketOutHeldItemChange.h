#ifndef MYCELIUM_PACKETOUTHELDITEMCHANGE_H
#define MYCELIUM_PACKETOUTHELDITEMCHANGE_H

#include "AbstractPacket.h"

class PacketOutHeldItemChange : public PacketOut {
public:
    PacketOutHeldItemChange() = default;

public:
    void encode(ByteBuffer &buf) override {
        buf.writeByte(slot);
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x48;
    }

public:
    char slot = 0;

};

#endif //MYCELIUM_PACKETOUTHELDITEMCHANGE_H
