#ifndef MYCELIUM_PACKETOUTLOGINSUCCESS_H
#define MYCELIUM_PACKETOUTLOGINSUCCESS_H

#include "AbstractPacket.h"

class PacketOutLoginSuccess : public PacketOut {
public:
    PacketOutLoginSuccess() = default;

public:
    void encode(ByteBuffer& buf) override {
        buf.writeUUID(uuid);
        buf.writeString(username);
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x02;
    }

public:
    UUID_t uuid;
    std::string username;

};

#endif //MYCELIUM_PACKETOUTLOGINSUCCESS_H
