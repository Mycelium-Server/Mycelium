#pragma once

#include "packet.h"

class ServerboundHandshake : public ServerboundPacket {
public: 
    ServerboundHandshake();
    ~ServerboundHandshake();

public:
    void read(ByteBuffer&) override;
    ServerboundPacket* createInstance() override;
    int getPacketID() const override;

public:
    int protocolVersion;
    std::string serverAddress;
    unsigned short serverPort;
    int nextState;

    enum {
        STATUS = 1,
        LOGIN = 2
    };

};