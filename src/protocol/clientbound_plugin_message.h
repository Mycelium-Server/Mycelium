#pragma once

#include "packet.h"

class ClientboundPluginMessage : public ClientboundPacket {
public:
    ClientboundPluginMessage();
    ~ClientboundPluginMessage();

public:
    void write(ByteBuffer&) override;
    [[nodiscard]] int getPacketID() const override;

public:
    std::string channel;
    ByteBuffer data;

};