#ifndef MYCELIUM_PACKETINPING_H
#define MYCELIUM_PACKETINPING_H

#include "AbstractPacket.h"

class PacketInPing : public PacketIn {
public:
    void read(ByteBuffer& buf) override {
        payload = buf.readLong();
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x01;
    }

public:
    long payload;

};

#endif //MYCELIUM_PACKETINPING_H
