#pragma once

#include "packet.h"
#include "../server/location.h"

class ClientboundSynchronizePlayerPosition : public ClientboundPacket {
public:
    ClientboundSynchronizePlayerPosition();
    ~ClientboundSynchronizePlayerPosition();

public:
    void write(ByteBuffer&) override;
    [[nodiscard]] int getPacketID() const override;

public:
    Location location {};
    union {
        struct {
            unsigned char isRelativeX : 1;
            unsigned char isRelativeY : 1;
            unsigned char isRelativeZ : 1;
            unsigned char isRelativeRotY : 1;
            unsigned char isRelativeRotX : 1;
            unsigned char unused : 3;
        };

        unsigned char value = 0;
    } flags {};
    int teleportId = 0;
    bool dismountVehicle = false;

};