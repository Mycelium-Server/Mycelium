#pragma once

#include "packet.h"
#include "../server/entity.h"
#include "../server/game_server.h"

class ClientboundLogin : public ClientboundPacket {
public:
    ClientboundLogin();
    ~ClientboundLogin();

public:
    void write(ByteBuffer&) override;
    int getPacketID() const override;

public:
    Entity* entity;
    GameServer* server;
    PlayerData player;
    std::vector<Dimension> dimensions;
    ByteBuffer registryCodec;
    Dimension dimension;

};