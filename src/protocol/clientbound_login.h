#pragma once

#include "packet.h"
#include "../server/game_server.h"

class ClientboundLogin : public ClientboundPacket {
public:
    ClientboundLogin();
    ~ClientboundLogin();

public:
    void write(ByteBuffer&) override;
    [[nodiscard]] int getPacketID() const override;

public:
    EntityPlayer* entity = nullptr;
    GameServer* server = nullptr;
    PlayerData player;
    std::vector<Dimension> dimensions;
    ByteBuffer registryCodec;
    Dimension dimension;

};