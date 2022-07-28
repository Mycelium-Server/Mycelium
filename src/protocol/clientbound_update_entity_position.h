#pragma once

#include "packet.h"
#include "../server/entity/entity.h"

class ClientboundUpdateEntityPosition : public ClientboundPacket {
public:
    ClientboundUpdateEntityPosition();
    ~ClientboundUpdateEntityPosition();

public:
    void write(ByteBuffer&) override;
    [[nodiscard]] int getPacketID() const override;

public:
    Entity* entity = nullptr;
    Position3d position {};

};