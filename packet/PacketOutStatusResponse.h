#ifndef MYCELIUM_PACKETOUTSTATUSRESPONSE_H
#define MYCELIUM_PACKETOUTSTATUSRESPONSE_H

#include "AbstractPacket.h"

class PacketOutStatusResponse : public PacketOut {
public:
    PacketOutStatusResponse() = default;

public:
    ByteBuffer encode() override {
        std::string response =
                R"({"version": {"name": ")"+version.name+
                R"(","protocol": )"+std::to_string(version.protocol)+
                R"(},"players": {"max": )"+std::to_string(players.max)+
                R"(,"online": )"+std::to_string(players.online)+
                R"(},"description": {"text": ")"+
                description.text+R"("},"favicon": ")"+
                favicon+"\"}";
        ByteBuffer buf;
        buf.writeString(response);
        return buf;
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x00;
    }

public:
    struct {
        std::string name;
        unsigned int protocol;
    } version;

    struct {
        int max = 0;
        int online = 0;
    } players;

    struct {
        std::string text;
    } description;

    std::string favicon;
};

#endif //MYCELIUM_PACKETOUTSTATUSRESPONSE_H
