#include "serverbound_encryption_response.h"

ServerboundEncryptionResponse::ServerboundEncryptionResponse() {

}

ServerboundEncryptionResponse::~ServerboundEncryptionResponse() {

}

void ServerboundEncryptionResponse::read(ByteBuffer& buf) {
    sharedSecret = { buf.readBytes(buf.readVarInt()) };
    if (buf.readByte()) {
        verifyToken = { buf.readBytes(buf.readVarInt()) };
    } else {
        Cryptography c;
        c.salt = buf.readLong();
        c.messageSignature = { buf.readBytes(buf.readVarInt()) };
    }
}

ServerboundPacket* ServerboundEncryptionResponse::createInstance() {
    return new ServerboundEncryptionResponse();
}

int ServerboundEncryptionResponse::getPacketID() const {
    return 0x01;
}