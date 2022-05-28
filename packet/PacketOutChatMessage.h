#ifndef MYCELIUM_PACKETOUTCHATMESSAGE_H
#define MYCELIUM_PACKETOUTCHATMESSAGE_H

#include "AbstractPacket.h"

class PacketOutChatMessage : public PacketOut {
public:
    PacketOutChatMessage() = default;

public:
    void encode(ByteBuffer &buf) override {
        buf.writeString(json_data);
        buf.writeByte(position);
        buf.writeUUID(uuid);
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x0F;
    }

public:
    std::string json_data;
    byte_t position = 0;
    UUID_t uuid;

};

#endif //MYCELIUM_PACKETOUTCHATMESSAGE_H
