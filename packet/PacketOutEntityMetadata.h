#ifndef MYCELIUM_PACKETOUTENTITYMETADATA_H
#define MYCELIUM_PACKETOUTENTITYMETADATA_H

#include "AbstractPacket.h"
#include "../EntityMetadata.h"

class PacketOutEntityMetadata : public PacketOut {
public:
    PacketOutEntityMetadata() = default;

public:
    void encode(ByteBuffer &buf) override {
        buf.writeVarInt(entity_id);
        metadata->encode(buf);
        EMD_WriteEnd_(buf);
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x4D;
    }

public:
    int entity_id = 0;
    std::shared_ptr<EntityMetadata> metadata;

};

#endif //MYCELIUM_PACKETOUTENTITYMETADATA_H
