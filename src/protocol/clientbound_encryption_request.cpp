#include "clientbound_encryption_request.h"

ClientboundEncryptionRequest::ClientboundEncryptionRequest() {

}

ClientboundEncryptionRequest::~ClientboundEncryptionRequest() {

}

void ClientboundEncryptionRequest::write(ByteBuffer& out) {
    out.writeString(serverID);
    out.writeVarInt(rsa.publicKey.readableBytes());
    out.writeBytes(rsa.publicKey);
    out.writeVarInt(verifyToken.readableBytes());
    out.writeBytes(verifyToken);
}

int ClientboundEncryptionRequest::getPacketID() const {
    return 0x01;
}