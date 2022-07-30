#pragma once

#include "packet.h"

class ClientboundAckBlockChange : public ClientboundPacket {
public:
    ClientboundAckBlockChange();
    ~ClientboundAckBlockChange();

public:
    void write(ByteBuffer&) override;
    [[nodiscard]] int getPacketID() const override;

public:
    int sequence = 0;

};