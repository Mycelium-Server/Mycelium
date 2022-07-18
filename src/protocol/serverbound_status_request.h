#pragma once

#include "packet.h"

class ServerboundStatusRequest : public ServerboundPacket {
public:
    ServerboundStatusRequest();
    ~ServerboundStatusRequest();

public:
    void read(ByteBuffer&) override;
    ServerboundPacket* createInstance() override;
    int getPacketID() const override;
    void handle(ConnectionContext*) override;

};