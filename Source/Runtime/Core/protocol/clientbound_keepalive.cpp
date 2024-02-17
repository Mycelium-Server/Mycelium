

#include "clientbound_keepalive.h"

ClientboundKeepAlive::ClientboundKeepAlive() = default;
ClientboundKeepAlive::~ClientboundKeepAlive() = default;

void ClientboundKeepAlive::write(ByteBuffer& out) {
  out.writeLong(id);
}

int ClientboundKeepAlive::getPacketID() const {
  return 0x20;
}