#pragma once

#include "packet.h"

class ServerboundEncryptionResponse : public ServerboundPacket {
public:
    struct Cryptography {
        long long salt;
        ByteBuffer messageSignature;
    };

public:
    ServerboundEncryptionResponse();
    ~ServerboundEncryptionResponse();

public:
    void read(ByteBuffer&) override;
    ServerboundPacket* createInstance() override;
    int getPacketID() const override;

public:
    ByteBuffer sharedSecret;
    std::optional<ByteBuffer> verifyToken;
    std::optional<Cryptography> cryptography;

};