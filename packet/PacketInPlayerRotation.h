#ifndef MYCELIUM_PACKETINPLAYERROTATION_H
#define MYCELIUM_PACKETINPLAYERROTATION_H

#include "AbstractPacket.h"

class PacketInPlayerRotation : public PacketIn {
public:
    void read(ByteBuffer &buf) override {
        yaw = buf.readFloat();
        pitch = buf.readFloat();
        on_ground = buf.readBoolean();
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x13;
    }

public:
    float yaw = 0;
    float pitch = 0;
    bool on_ground = false;

};

#endif //MYCELIUM_PACKETINPLAYERROTATION_H
