#ifndef MYCELIUM_PACKETOUTSPAWNPLAYER_H
#define MYCELIUM_PACKETOUTSPAWNPLAYER_H

#include "AbstractPacket.h"

class PacketOutSpawnPlayer : public PacketOut {
public:
    PacketOutSpawnPlayer() = default;

public:
    void encode(ByteBuffer &buf) override {
        buf.writeVarInt(entity_id);
        buf.writeUUID(player_uuid);
        buf.writeDouble(x);
        buf.writeDouble(y);
        buf.writeDouble(z);
        buf.writeByte(yaw);
        buf.writeByte(pitch);
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x04;
    }

public:
    int entity_id = 0;
    UUID_t player_uuid;
    double x = 0;
    double y = 0;
    double z = 0;
    byte_t yaw = 0;
    byte_t pitch = 0;

};

#endif //MYCELIUM_PACKETOUTSPAWNPLAYER_H
