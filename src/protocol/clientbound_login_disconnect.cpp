#include "clientbound_login_disconnect.h"

ClientboundLoginDisconnect::ClientboundLoginDisconnect() = default;
ClientboundLoginDisconnect::~ClientboundLoginDisconnect() = default;

void ClientboundLoginDisconnect::write(ByteBuffer& buf) {
  buf.writeString(reason);
}

int ClientboundLoginDisconnect::getPacketID() const {
  return 0x00;
}
