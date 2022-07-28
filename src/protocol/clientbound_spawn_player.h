#pragma once

#include "packet.h"

class ClientboundSpawnPlayer : public ClientboundPacket {
public:
    ClientboundSpawnPlayer();
    ~ClientboundSpawnPlayer();

public:
    void write(ByteBuffer&) override;
    [[nodiscard]] int getPacketID() const override;

public:
    PlayerData data {};

};