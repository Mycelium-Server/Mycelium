#pragma once

#include "packet.h"

class ServerboundClientInformation : public ServerboundPacket {
public:
    ServerboundClientInformation();
    ~ServerboundClientInformation();

public:
    void read(ByteBuffer&) override;
    ServerboundPacket* createInstance() override;
    int getPacketID() const override;

public:
    ClientSettings settings;

};