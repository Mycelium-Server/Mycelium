#include "serverbound_handshake.h"

ServerboundHandshake::ServerboundHandshake() {

}

ServerboundHandshake::~ServerboundHandshake() {

}

void ServerboundHandshake::read(ByteBuffer& in) {
    protocolVersion = in.readVarInt();
    serverAddress = in.readString();
    serverPort = (unsigned short) in.readShort();
    nextState = in.readVarInt();
}

ServerboundPacket* ServerboundHandshake::createInstance() {
    return new ServerboundHandshake();
}

int ServerboundHandshake::getPacketID() const {
    return 0x00;
}