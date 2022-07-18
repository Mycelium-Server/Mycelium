#pragma once

#include "packet.h"

class ServerboundPingRequest : public ServerboundPacket {
public:
    ServerboundPingRequest();
    ~ServerboundPingRequest();

public:
    void read(ByteBuffer&) override;
    ServerboundPacket* createInstance() override;
    [[nodiscard]] int getPacketID() const override;
    void handle(ConnectionContext*) override;

public:
    long long payload = 0;

};