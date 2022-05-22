#ifndef MYCELIUM_PACKETOUTUPDATEVIEWPOSITION_H
#define MYCELIUM_PACKETOUTUPDATEVIEWPOSITION_H

#include "AbstractPacket.h"

class PacketOutUpdateViewPosition : public PacketOut {
public:
    PacketOutUpdateViewPosition() = default;

    void encode(ByteBuffer &buf) override {
        buf.writeVarInt(chunk_x);
        buf.writeVarInt(chunk_z);
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x49;
    }

public:
    int chunk_x = 0;
    int chunk_z = 0;

};

#endif //MYCELIUM_PACKETOUTUPDATEVIEWPOSITION_H
