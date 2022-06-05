#ifndef MYCELIUM_PACKETOUTENCRYPTIONREQUEST_H
#define MYCELIUM_PACKETOUTENCRYPTIONREQUEST_H

#include "AbstractPacket.h"

class PacketOutEncryptionRequest : public PacketOut {
public:
    void encode(ByteBuffer &buf) override {
        buf.writeString("");
        buf.writeVarInt((int)public_key.bytes.size());
        buf.writeByteBuffer(public_key);
        buf.writeVarInt(4);
        buf.writeInt(verify_token);
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x01;
    }

public:
    ByteBuffer public_key;
    int verify_token = 0;

};

#endif //MYCELIUM_PACKETOUTENCRYPTIONREQUEST_H
