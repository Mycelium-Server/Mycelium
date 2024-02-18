

#include "clientbound_encryption_request.h"

ClientboundEncryptionRequest::ClientboundEncryptionRequest() = default;
ClientboundEncryptionRequest::~ClientboundEncryptionRequest() = default;

void ClientboundEncryptionRequest::write(ByteBuffer& out) {
  out.writeString(serverID);
  out.writeVarInt((int) rsa.publicKey.readableBytes());
  out.writeBytes(rsa.publicKey.data);
  out.writeVarInt((int) verifyToken.readableBytes());
  out.writeBytes(verifyToken);
}

int ClientboundEncryptionRequest::getPacketID() const {
  return 0x01;
}