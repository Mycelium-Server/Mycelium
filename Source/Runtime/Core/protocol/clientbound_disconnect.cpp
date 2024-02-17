

#include "clientbound_disconnect.h"

ClientboundDisconnect::ClientboundDisconnect() = default;
ClientboundDisconnect::~ClientboundDisconnect() = default;

void ClientboundDisconnect::write(ByteBuffer& buf) {
  buf.writeString(reason);
}

int ClientboundDisconnect::getPacketID() const {
  return 0x19;
}
