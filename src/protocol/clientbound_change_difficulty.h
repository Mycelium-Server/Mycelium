#pragma once

#include "packet.h"
#include "../server/difficulty.h"

class ClientboundChangeDifficulty : public ClientboundPacket {
public:
    ClientboundChangeDifficulty();
    ~ClientboundChangeDifficulty();

public:
    void write(ByteBuffer&) override;
    int getPacketID() const override;

public:
    Difficulty difficulty;
    bool isLocked;

};