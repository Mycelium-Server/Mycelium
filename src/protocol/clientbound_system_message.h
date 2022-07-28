#pragma once

#include "packet.h"
#include "../server/chat_type.h"

class ClientboundSystemMessage : public ClientboundPacket {
public:
    ClientboundSystemMessage();
    ~ClientboundSystemMessage();

public:
    void write(ByteBuffer&) override;
    [[nodiscard]] int getPacketID() const override;

public:
    std::string message;
    ChatType type = (ChatType) 0;

};