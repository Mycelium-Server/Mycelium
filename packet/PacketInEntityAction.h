#ifndef MYCELIUM_PACKETINENTITYACTION_H
#define MYCELIUM_PACKETINENTITYACTION_H

#include "AbstractPacket.h"

class PacketInEntityAction : public PacketIn {
public:
    void read(ByteBuffer &buf) override {
        entity_id = buf.readVarInt();
        action_id = buf.readVarInt();
        jump_boost = buf.readBoolean();
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x1B;
    }

public:
    int entity_id = 0;
    int action_id = 0;
    bool jump_boost = false;

    enum ACTION {
        START_SNEAKING = 0,
        STOP_SNEAKING = 1,
        LEAVE_BED = 2,
        START_SPRINTING = 3,
        STOP_SPRINTING = 4,
        START_JUMP_WITH_HORSE = 5,
        STOP_JUMP_WITH_HORSE = 6,
        OPEN_HORSE_INVENTORY = 7,
        START_FLYING_WITH_ELYTRA = 8
    };

};

#endif //MYCELIUM_PACKETINENTITYACTION_H
