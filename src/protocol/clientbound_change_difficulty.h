#pragma once

#include "packet.h"
#include "../server/difficulty.h"

class ClientboundChangeDifficulty : public ClientboundPacket {
public:
    ClientboundChangeDifficulty();
    ~ClientboundChangeDifficulty();

public:
    void write(ByteBuffer&) override;
    [[nodiscard]] int getPacketID() const override;

public:
    Difficulty difficulty = (Difficulty) 0;
    bool isLocked = false;

};