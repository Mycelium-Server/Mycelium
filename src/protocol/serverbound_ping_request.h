#pragma once

#include "packet.h"

class ServerboundPingRequest : public ServerboundPacket {
public:
    ServerboundPingRequest();
    ~ServerboundPingRequest();

public:
    void read(ByteBuffer&) override;
    ServerboundPacket* createInstance() override;
    int getPacketID() const override;

public:
    long long payload;

};