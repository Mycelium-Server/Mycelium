#pragma once

#include "packet.h"
#include "../server/entity/entity.h"

class ClientboundRemoveEntities : public ClientboundPacket {
public:
    ClientboundRemoveEntities();
    ~ClientboundRemoveEntities();

public:
    void write(ByteBuffer&) override;
    [[nodiscard]] int getPacketID() const override;

public:
    std::vector<Entity*> entities {};

};