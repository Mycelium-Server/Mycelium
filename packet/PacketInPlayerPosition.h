#ifndef MYCELIUM_PACKETINPLAYERPOSITION_H
#define MYCELIUM_PACKETINPLAYERPOSITION_H

#include "AbstractPacket.h"

class PacketInPlayerPosition : public PacketIn {
public:
    PacketInPlayerPosition() = default;

public:
    void read(ByteBuffer &buf) override {
        x = buf.readDouble();
        feet_y = buf.readDouble();
        z = buf.readDouble();
        on_ground = buf.readBoolean();
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x11;
    }

public:
    double x = 0;
    double feet_y = 0;
    double z = 0;
    bool on_ground = false;

};

#endif //MYCELIUM_PACKETINPLAYERPOSITION_H
