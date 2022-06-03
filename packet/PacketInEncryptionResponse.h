#ifndef MYCELIUM_PACKETINENCRYPTIONRESPONSE_H
#define MYCELIUM_PACKETINENCRYPTIONRESPONSE_H

#include "AbstractPacket.h"

class PacketInEncryptionResponse : public PacketIn {
public:
    void read(ByteBuffer &buf) override {
        shared_secret = buf.readBytes(buf.readVarInt());
        verify_token = buf.readBytes(buf.readVarInt());
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x01;
    }

public:
    ByteBuffer shared_secret;
    ByteBuffer verify_token;

};

#endif //MYCELIUM_PACKETINENCRYPTIONRESPONSE_H
