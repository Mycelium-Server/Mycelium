

#include "clientbound_custom_payload.h"

ClientboundCustomPayload::ClientboundCustomPayload() = default;
ClientboundCustomPayload::~ClientboundCustomPayload() = default;

void ClientboundCustomPayload::write(ByteBuffer& out) {
  out.writeString(channel);
  out.writeBytes(data);
}

int ClientboundCustomPayload::getPacketID() const {
  return 0x16;
}