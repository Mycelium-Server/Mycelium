#pragma once

#include "packet.h"

class ClientboundEncryptionRequest : public ClientboundPacket {
public:
    ClientboundEncryptionRequest();
    ~ClientboundEncryptionRequest();

public:
    void write(ByteBuffer&) override;
    int getPacketID() const override;

public:
    std::string serverID;
    KeyPairRSA rsa;
    ByteBuffer verifyToken;

};