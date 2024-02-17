

#include "serverbound_chat_message.h"

#include "../listeners/play_packet_listener.h"

ServerboundChatMessage::ServerboundChatMessage() = default;
ServerboundChatMessage::~ServerboundChatMessage() = default;

void ServerboundChatMessage::read(ByteBuffer& buf) {
  message = buf.readString();
  cryptography.timestamp = buf.readLong();
  cryptography.salt = buf.readLong();
  cryptography.signature = ByteBuffer(buf.readBytes(buf.readVarInt()));
  signedPreview = buf.readByte();
}

ServerboundPacket* ServerboundChatMessage::createInstance() {
  return new ServerboundChatMessage();
}

int ServerboundChatMessage::getPacketID() const {
  return 0x05;
}

void ServerboundChatMessage::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::PLAY) {
    ((PlayPacketListener*) ctx->packetListener)->handleChatMessage(ctx, this);
  }
  delete this;
}
