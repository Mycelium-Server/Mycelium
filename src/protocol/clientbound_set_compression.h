#pragma once

#include "packet.h"

class ClientboundSetCompression : public ClientboundPacket {
public:
    ClientboundSetCompression();
    ~ClientboundSetCompression();

public:
    void write(ByteBuffer&) override;
    int getPacketID() const override;
    
public:
    int threshold;

};