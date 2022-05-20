#ifndef SERVER_CORE_PACKETINHANDSHAKE_H
#define SERVER_CORE_PACKETINHANDSHAKE_H

#include <string>
#include "AbstractPacket.h"

class PacketInHandshake : public PacketIn {
public:
    void read(ByteBuffer& buf) override {
        protocol_version = buf.readVarInt();
        server_address = buf.readString();
        server_port = buf.readUnsignedShort();
        next_state = buf.readVarInt();
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x00;
    }

public:
    int protocol_version;
    std::string server_address;
    int server_port;
    int next_state;

};

#endif //SERVER_CORE_PACKETINHANDSHAKE_H
