#ifndef MYCELIUM_PACKETINCHATMESSAGE_H
#define MYCELIUM_PACKETINCHATMESSAGE_H

#include "AbstractPacket.h"

class PacketInChatMessage : public PacketIn {
public:
    PacketInChatMessage() = default;

public:
    void read(ByteBuffer &buf) override {
        message = buf.readString();
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x03;
    }

public:
    std::string message;

};

#endif //MYCELIUM_PACKETINCHATMESSAGE_H
