#ifndef MYCELIUM_PACKETOUTPLAYERABILITIES_H
#define MYCELIUM_PACKETOUTPLAYERABILITIES_H

#include "AbstractPacket.h"

class PacketOutPlayerAbilities : public PacketOut {
public:
    PacketOutPlayerAbilities() = default;

public:
    void encode(ByteBuffer& buf) override {
        buf.writeByte(flags.value);
        buf.writeFloat(flying_speed);
        buf.writeFloat(field_of_view_modifier);
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x32;
    }

public:
    union {
        struct {
            char invulnerable : 1;
            char flying : 1;
            char allow_flying : 1;
            char creative_mode : 1;
            char unused : 4;
        };
        char value;
    } flags{};
    float flying_speed = 0;
    float field_of_view_modifier = 0;

    constexpr const static float DEFAULT_FLYING_SPEED = 0.05f;
    constexpr const static float DEFAULT_FIELD_OF_VIEW_MODIFIER = 0.1f;

};

#endif //MYCELIUM_PACKETOUTPLAYERABILITIES_H
