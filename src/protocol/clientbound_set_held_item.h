#pragma once

#include "packet.h"

class ClientboundSetHeldItem : public ClientboundPacket {
public:
    ClientboundSetHeldItem();
    ~ClientboundSetHeldItem();

public:
    void write(ByteBuffer&) override;
    [[nodiscard]] int getPacketID() const override;

public:
    unsigned char slot = 0;

};