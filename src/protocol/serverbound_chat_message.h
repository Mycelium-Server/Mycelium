#pragma once

#include "packet.h"
#include "message_signature.h"

class ServerboundChatMessage : public ServerboundPacket {
public:
    ServerboundChatMessage();
    ~ServerboundChatMessage();

public:
    void read(ByteBuffer&) override;
    ServerboundPacket* createInstance() override;
    [[nodiscard]] int getPacketID() const override;
    void handle(ConnectionContext*) override;

public:
    std::string message;
    MessageSignature cryptography;
    bool signedPreview = false;


};