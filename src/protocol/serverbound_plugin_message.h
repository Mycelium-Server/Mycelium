#pragma once

#include "packet.h"

class ServerboundPluginMessage : public ServerboundPacket {
public:
    ServerboundPluginMessage();
    ~ServerboundPluginMessage();

public:
    void read(ByteBuffer&) override;
    ServerboundPacket* createInstance() override;
    int getPacketID() const override;
    void handle(ConnectionContext*) override;

public:
    std::string channel;
    ByteBuffer data;

};