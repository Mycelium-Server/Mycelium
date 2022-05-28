#ifndef MYCELIUM_PACKETINPLAYERPOSITIONANDROTATION_H
#define MYCELIUM_PACKETINPLAYERPOSITIONANDROTATION_H

#include "AbstractPacket.h"

class PacketInPlayerPositionAndRotation : public PacketIn {
public:
    PacketInPlayerPositionAndRotation() = default;

public:
    void read(ByteBuffer &buf) override {
        x = buf.readDouble();
        feet_y = buf.readDouble();
        z = buf.readDouble();
        yaw = buf.readFloat();
        pitch = buf.readFloat();
        on_ground = buf.readBoolean();
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x12;
    }

public:
    double x = 0;
    double feet_y = 0;
    double z = 0;
    float yaw = 0;
    float pitch = 0;
    bool on_ground = false;

};

#endif //MYCELIUM_PACKETINPLAYERPOSITIONANDROTATION_H
