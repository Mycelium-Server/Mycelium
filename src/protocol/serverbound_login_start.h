#pragma once

#include "packet.h"
#include "signature_data.h"
#include <optional>

class ServerboundLoginStart : public ServerboundPacket {
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