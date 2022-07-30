#pragma once

#include "packet.h"
#include "../server/face.h"

class ServerboundUseItemOn : public ServerboundPacket {
public:
    ServerboundUseItemOn();
    ~ServerboundUseItemOn();

public:
    void read(ByteBuffer&) override;
    ServerboundPacket* createInstance() override;
    [[nodiscard]] int getPacketID() const override;
    void handle(ConnectionContext*) override;

public:
    MainHand hand = (MainHand) 0;
    ProtocolPosition position {};
    BlockFace face = (BlockFace) 0;
    float cursorX = 0;
    float cursorY = 0;
    float cursorZ = 0;
    bool insideBlock = false;
    int sequence = 0;

};