#ifndef MYCELIUM_PACKETOUTKEEPALIVE_H
#define MYCELIUM_PACKETOUTKEEPALIVE_H

#include "AbstractPacket.h"

class PacketOutKeepalive : public PacketOut {
public:
    PacketOutKeepalive() = default;

public:
    void encode(ByteBuffer& buf) override {
        buf.writeLong(keep_alive_id);
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x21;
    }

public:
    long keep_alive_id = 0;

};

#endif //MYCELIUM_PACKETOUTKEEPALIVE_H
