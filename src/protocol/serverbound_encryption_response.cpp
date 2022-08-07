#include "serverbound_encryption_response.h"

#include "../listeners/login_packet_listener.h"

ServerboundEncryptionResponse::ServerboundEncryptionResponse() = default;
ServerboundEncryptionResponse::~ServerboundEncryptionResponse() = default;

void ServerboundEncryptionResponse::read(ByteBuffer& buf) {
  sharedSecret = ByteBuffer(buf.readBytes(buf.readVarInt()));
  if (buf.readByte()) {
    verifyToken = ByteBuffer(buf.readBytes(buf.readVarInt()));
  } else {
    Cryptography c;
    c.salt = buf.readLong();
    c.messageSignature = ByteBuffer(buf.readBytes(buf.readVarInt()));
  }
}

ServerboundPacket* ServerboundEncryptionResponse::createInstance() {
  return new ServerboundEncryptionResponse();
}

int ServerboundEncryptionResponse::getPacketID() const {
  return 0x01;
}

void ServerboundEncryptionResponse::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::LOGIN) {
    ((LoginPacketListener*) ctx->packetListener)->handleEncryptionResponse(ctx, this);
  }
  delete this;
}