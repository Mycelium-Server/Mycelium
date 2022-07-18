#pragma once

#include "packet.h"
#include "../uuid.h"
#include <optional>
#include <string>

class ClientboundLoginSuccess : public ClientboundPacket {
public:
    struct Property {
        std::string name;
        std::string value;
        std::optional<std::string> signature;
    };

public:
    ClientboundLoginSuccess();
    ~ClientboundLoginSuccess();

public:
    void write(ByteBuffer&) override;
    [[nodiscard]] int getPacketID() const override;

public:
    uuids::uuid uuid;
    std::string name;
    std::vector<Property> properties;

};