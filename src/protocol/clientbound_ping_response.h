#pragma once

#include "packet.h"

class ClientboundPingResponse : public ClientboundPacket {
public:
    ClientboundPingResponse();
    ~ClientboundPingResponse();

public:
    void write(ByteBuffer&) override;
    int getPacketID() const override;

public:
    long long payload;

};