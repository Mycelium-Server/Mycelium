#pragma once

#include "packet.h"
#include <optional>

class ServerboundLoginStart : public ServerboundPacket {
public:
    struct SigData {
        long long timestamp;
        ByteBuffer publicKey;
        ByteBuffer signature;
    };

public:
    ServerboundLoginStart();
    ~ServerboundLoginStart();

public:
    void read(ByteBuffer&) override;
    ServerboundPacket* createInstance() override;
    [[nodiscard]] int getPacketID() const override;
    void handle(ConnectionContext*) override;

public:
    std::string name;
    std::optional<SigData> sigdata;

};