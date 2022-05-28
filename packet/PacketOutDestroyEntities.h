#ifndef MYCELIUM_PACKETOUTDESTROYENTITIES_H
#define MYCELIUM_PACKETOUTDESTROYENTITIES_H

#include "AbstractPacket.h"

class PacketOutDestroyEntities : public PacketOut {
public:
    PacketOutDestroyEntities() = default;

public:
    void encode(ByteBuffer &buf) override {
        buf.writeVarInt((int)entity_ids.size());
        for(int id : entity_ids) buf.writeVarInt(id);
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x3A;
    }

public:
    std::vector<int> entity_ids;

};

#endif //MYCELIUM_PACKETOUTDESTROYENTITIES_H
