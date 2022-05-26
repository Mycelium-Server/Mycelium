#ifndef MYCELIUM_PACKETOUTPOSITIONANDLOOK_H
#define MYCELIUM_PACKETOUTPOSITIONANDLOOK_H

#include "AbstractPacket.h"

class PacketOutPositionAndLook : public PacketOut {
public:
    PacketOutPositionAndLook() = default;

public:
    void encode(ByteBuffer &buf) override {
        buf.writeDouble(x);
        buf.writeDouble(y);
        buf.writeDouble(z);
        buf.writeFloat(yaw);
        buf.writeFloat(pitch);
        buf.writeByte(flags.value);
        buf.writeVarInt(teleport_id);
        buf.writeBoolean(dismount_vehicle);
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x38;
    }

public:
    double x = 0;
    double y = 0;
    double z = 0;
    float yaw = 0;
    float pitch = 0;
    union {
        struct {
            signed char X : 1;
            signed char Y : 1;
            signed char Z : 1;
            signed char Y_ROT : 1;
            signed char X_ROT : 1;
            signed char unused : 4;
        };
        signed char value;
    } flags{};
    int teleport_id = 0;
    bool dismount_vehicle = false;

};

#endif //MYCELIUM_PACKETOUTPOSITIONANDLOOK_H
