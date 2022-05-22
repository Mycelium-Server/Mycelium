#ifndef MYCELIUM_PACKETINKEEPALIVE_H
#define MYCELIUM_PACKETINKEEPALIVE_H

#include "AbstractPacket.h"

class PacketInKeepalive : public PacketIn {
public:
    void read(ByteBuffer& buf) override {
        keep_alive_id = buf.readLong();
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x0F;
    }

public:
    long keep_alive_id = 0;

};

#endif //MYCELIUM_PACKETINKEEPALIVE_H
