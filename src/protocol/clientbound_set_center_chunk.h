#pragma once

#include "packet.h"
#include "../server/world/chunk.h"

class ClientboundSetCenterChunk : public ClientboundPacket {
public:
    ClientboundSetCenterChunk();
    ~ClientboundSetCenterChunk();

public:
    void write(ByteBuffer&) override;
    [[nodiscard]] int getPacketID() const override;

public:
    ChunkLocation location;

};