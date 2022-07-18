#include "clientbound_plugin_message.h"

ClientboundPluginMessage::ClientboundPluginMessage() {

}

ClientboundPluginMessage::~ClientboundPluginMessage() {

}

void ClientboundPluginMessage::write(ByteBuffer& out) {
    out.writeString(channel);
    out.writeBytes(data);
}

int ClientboundPluginMessage::getPacketID() const {
    return 0x15;
}