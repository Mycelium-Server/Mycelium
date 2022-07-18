#include "serverbound_handshake.h"
#include "../listeners/status_packet_listener.h"
#include "../listeners/login_packet_listener.h"

ServerboundHandshake::ServerboundHandshake() {

}

ServerboundHandshake::~ServerboundHandshake() = default;

void ServerboundHandshake::read(ByteBuffer& in) {
    protocolVersion = in.readVarInt();
    serverAddress = in.readString();
    serverPort = (unsigned short) in.readShort();
    nextState = (NextState) in.readVarInt();
}

ServerboundPacket* ServerboundHandshake::createInstance() {
    return new ServerboundHandshake();
}

int ServerboundHandshake::getPacketID() const {
    return 0x00;
}

void ServerboundHandshake::handle(ConnectionContext* ctx) {
    if (ctx->state == ConnectionState::NONE) {
        ctx->protocolVersion = protocolVersion;
        if (nextState == ServerboundHandshake::STATUS) {
            ctx->packetListener = new StatusPacketListener();
            ctx->state = ConnectionState::STATUS;
        } else if (nextState == ServerboundHandshake::LOGIN) {
            ctx->packetListener = new LoginPacketListener();
            ctx->state = ConnectionState::LOGIN;
        }
    }
    delete this;
}