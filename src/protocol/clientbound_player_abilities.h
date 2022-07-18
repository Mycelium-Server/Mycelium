#pragma once

#include "packet.h"

class ClientboundPlayerAbilities : public ClientboundPacket {
public:
    ClientboundPlayerAbilities();
    ~ClientboundPlayerAbilities();

public:
    void write(ByteBuffer&) override;
    int getPacketID() const override;
    void construct(PlayerData);

public:
    union {
        struct {
            char invulnerable : 1;
            char flying : 1;
            char allowFlying : 1;
            char creativeMode : 1;
            char unused : 4;
        };

        char value;
    } flags;
    float flyingSpeed;
    float fovModifier;

};