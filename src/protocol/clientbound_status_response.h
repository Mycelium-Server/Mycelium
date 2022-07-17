#pragma once

#include "packet.h"

class GameServer;

class ClientboundStatusResponse : public ClientboundPacket {
public:
    ClientboundStatusResponse();
    ~ClientboundStatusResponse();

public:
    void write(ByteBuffer&) override;
    int getPacketID() const override;
    void construct(GameServer*);

public:
    std::string response;

};