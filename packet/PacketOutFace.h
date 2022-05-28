#ifndef MYCELIUM_PACKETOUTFACE_H
#define MYCELIUM_PACKETOUTFACE_H

#include "AbstractPacket.h"

class PacketOutFace : public PacketOut {
public:
    PacketOutFace() = default;

public:
    void encode(ByteBuffer &buf) override {
        buf.writeVarInt(feet_or_eyes);
        buf.writeDouble(target_x);
        buf.writeDouble(target_y);
        buf.writeDouble(target_z);
        buf.writeBoolean(is_entity);
        if(is_entity) {
            buf.writeVarInt(entity_id);
            buf.writeVarInt(entity_feet_or_eyes);
        }
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x37;
    }

public:
    int feet_or_eyes = 0;
    double target_x = 0;
    double target_y = 0;
    double target_z = 0;
    bool is_entity = false;
    int entity_id = 0;
    int entity_feet_or_eyes = 0;

    constexpr const static int FEET = 0, EYES = 1;

};

#endif //MYCELIUM_PACKETOUTFACE_H
