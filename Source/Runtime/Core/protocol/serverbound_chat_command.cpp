

#include "serverbound_chat_command.h"

#include "../listeners/play_packet_listener.h"

ServerboundChatCommand::ServerboundChatCommand() = default;
ServerboundChatCommand::~ServerboundChatCommand() = default;

void ServerboundChatCommand::read(ByteBuffer& buf) {
  command = buf.readString();
  timestamp = buf.readLong();
  salt = buf.readLong();
  for (int i = 0; i < buf.readVarInt(); i++) {
    SignedCommandArgument argument {};
    argument.argument = buf.readString();
    argument.signature = ByteBuffer(buf.readBytes(buf.readVarInt()));
  }
  signedPreview = buf.readByte();
}

ServerboundPacket* ServerboundChatCommand::createInstance() {
  return new ServerboundChatCommand;
}

int ServerboundChatCommand::getPacketID() const {
  return 0x04;
}

void ServerboundChatCommand::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::PLAY) {
    ((PlayPacketListener*) ctx->packetListener)->handleChatCommand(ctx, this);
  }
  delete this;
}
