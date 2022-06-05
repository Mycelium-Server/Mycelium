#ifndef MYCELIUM_PACKETOUTLOGINDISCONNECT_H
#define MYCELIUM_PACKETOUTLOGINDISCONNECT_H

#include "AbstractPacket.h"

class PacketOutLoginDisconnect : public PacketOut {
public:
    void encode(ByteBuffer &buf) override {
        buf.writeString(reason);
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x00;
    }

public:
    std::string reason;

};

#endif //MYCELIUM_PACKETOUTLOGINDISCONNECT_H
