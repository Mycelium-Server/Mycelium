

#include "serverbound_plugin_message.h"

#include "../../../listeners/play_packet_listener.h"

ServerboundPluginMessage::ServerboundPluginMessage() = default;
ServerboundPluginMessage::~ServerboundPluginMessage() = default;

void ServerboundPluginMessage::read(ByteBuffer& buf) {
  channel = buf.readString();
  data = ByteBuffer(buf.readBytes(buf.readableBytes()));
}

ServerboundPacket* ServerboundPluginMessage::createInstance() {
  return new ServerboundPluginMessage();
}

int ServerboundPluginMessage::getPacketID() const {
  return 0x0D;
}

void ServerboundPluginMessage::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::PLAY) {
    ((PlayPacketListener*) ctx->packetListener)->handlePluginMessage(ctx, this);
  }
  delete this;
}