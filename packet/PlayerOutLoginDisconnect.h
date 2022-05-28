#ifndef MYCELIUM_PLAYEROUTLOGINDISCONNECT_H
#define MYCELIUM_PLAYEROUTLOGINDISCONNECT_H

#include "AbstractPacket.h"

class PacketOutLoginDisconnect : public PacketOut {
public:
    PacketOutLoginDisconnect() = default;

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

#endif //MYCELIUM_PLAYEROUTLOGINDISCONNECT_H
