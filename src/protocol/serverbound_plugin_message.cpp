#include "serverbound_plugin_message.h"

ServerboundPluginMessage::ServerboundPluginMessage() {

}

ServerboundPluginMessage::~ServerboundPluginMessage() {

}

void ServerboundPluginMessage::read(ByteBuffer& buf) {
    channel = buf.readString();
    data = { buf.readBytes(buf.readableBytes()) };
}

ServerboundPacket* ServerboundPluginMessage::createInstance() {
    return new ServerboundPluginMessage();
}

int ServerboundPluginMessage::getPacketID() const {
    return 0x0C;
}