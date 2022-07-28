#include "clientbound_system_message.h"

ClientboundSystemMessage::ClientboundSystemMessage() = default;
ClientboundSystemMessage::~ClientboundSystemMessage() = default;

void ClientboundSystemMessage::write(ByteBuffer& buf) {
    buf.writeString(message);
    buf.writeVarInt((int) type);
}

int ClientboundSystemMessage::getPacketID() const {
    return 0x62;
}
