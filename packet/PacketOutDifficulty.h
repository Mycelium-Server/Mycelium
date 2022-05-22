#ifndef MYCELIUM_PACKETOUTDIFFICULTY_H
#define MYCELIUM_PACKETOUTDIFFICULTY_H

#include "AbstractPacket.h"

class PacketOutDifficulty : public PacketOut {
public:
    PacketOutDifficulty() = default;

public:
    void encode(ByteBuffer& buf) override {
        buf.writeUnsignedByte(difficulty);
        buf.writeBoolean(difficulty_locked);
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x0E;
    }

public:
    unsigned char difficulty = 0;
    bool difficulty_locked = false;

};

#endif //MYCELIUM_PACKETOUTDIFFICULTY_H
