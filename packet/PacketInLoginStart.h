#ifndef MYCELIUM_PACKETINLOGINSTART_H
#define MYCELIUM_PACKETINLOGINSTART_H

#include "AbstractPacket.h"
#include <string>

class PacketInLoginStart : public PacketIn {
public:
    void read(ByteBuffer& buf) override {
        name = buf.readString();
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x00;
    }

public:
    std::string name;

};

#endif //MYCELIUM_PACKETINLOGINSTART_H
