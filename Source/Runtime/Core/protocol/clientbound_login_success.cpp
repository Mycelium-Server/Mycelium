

#include "clientbound_login_success.h"

ClientboundLoginSuccess::ClientboundLoginSuccess() = default;
ClientboundLoginSuccess::~ClientboundLoginSuccess() = default;

void ClientboundLoginSuccess::write(ByteBuffer& dst) {
  dst.writeUUID(uuid);
  dst.writeString(name);
  dst.writeVarInt((int) properties.size());
  for (auto& property: properties) {
    dst.writeString(property.name);
    dst.writeString(property.value);
    dst.writeByte(property.signature.has_value());
    if (property.signature.has_value()) {
      dst.writeString(property.signature.value());
    }
  }
}

int ClientboundLoginSuccess::getPacketID() const {
  return 0x02;
}