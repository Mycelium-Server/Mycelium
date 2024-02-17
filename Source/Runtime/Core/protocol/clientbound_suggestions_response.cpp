

#include "clientbound_suggestions_response.h"

ClientboundSuggestionsResponse::ClientboundSuggestionsResponse() = default;
ClientboundSuggestionsResponse::~ClientboundSuggestionsResponse() = default;

void ClientboundSuggestionsResponse::write(ByteBuffer& buf) {
  buf.writeVarInt(transactionID);
  buf.writeVarInt(start);
  buf.writeVarInt(length);
  buf.writeVarInt((int) matches.size());
  for (const auto& pair: matches) {
    buf.writeString(pair.first);
    buf.writeByte(pair.second.has_value());
    if (pair.second.has_value()) {
      buf.writeString(pair.second.value());
    }
  }
}

int ClientboundSuggestionsResponse::getPacketID() const {
  return 0x0E;
}
