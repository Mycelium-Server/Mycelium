#pragma once

#include "packet.h"

class ClientboundKeepAlive : public ClientboundPacket {
public:
    ClientboundKeepAlive();
    ~ClientboundKeepAlive();

public:
    void write(ByteBuffer&) override;
    [[nodiscard]] int getPacketID() const override;

public:
    long long id = 0;

};