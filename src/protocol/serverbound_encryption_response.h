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
    [[nodiscard]] int getPacketID() const override;
    void handle(ConnectionContext*) override;

public:
    ByteBuffer sharedSecret;
    std::optional<ByteBuffer> verifyToken;
    std::optional<Cryptography> cryptography;

};