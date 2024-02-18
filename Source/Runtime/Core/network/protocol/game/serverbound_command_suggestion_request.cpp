

#include "serverbound_command_suggestion_request.h"

#include "../../../listeners/play_packet_listener.h"

ServerboundCommandSuggestionRequest::ServerboundCommandSuggestionRequest() = default;
ServerboundCommandSuggestionRequest::~ServerboundCommandSuggestionRequest() = default;

void ServerboundCommandSuggestionRequest::read(ByteBuffer& buf) {
  transactionID = buf.readVarInt();
  text = buf.readString();
}

ServerboundPacket* ServerboundCommandSuggestionRequest::createInstance() {
  return new ServerboundCommandSuggestionRequest;
}

int ServerboundCommandSuggestionRequest::getPacketID() const {
  return 0x09;
}

void ServerboundCommandSuggestionRequest::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::PLAY) {
    ((PlayPacketListener*) ctx->packetListener)->handleCommandSuggestionRequest(ctx, this);
  }
  delete this;
}
