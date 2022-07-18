#include "serverbound_login_start.h"
#include "../listeners/login_packet_listener.h"

ServerboundLoginStart::ServerboundLoginStart() = default;
ServerboundLoginStart::~ServerboundLoginStart() = default;

void ServerboundLoginStart::read(ByteBuffer& in) {
    name = in.readString();
    if (in.readByte()) {
        SigData data;
        data.timestamp = in.readLong();
        data.publicKey = ByteBuffer(in.readBytes(in.readVarInt()));
        data.signature = ByteBuffer(in.readBytes(in.readVarInt()));
        sigdata = { data };
    }
}

ServerboundPacket* ServerboundLoginStart::createInstance() {
    return new ServerboundLoginStart();
}

int ServerboundLoginStart::getPacketID() const {
    return 0x00;
}

void ServerboundLoginStart::handle(ConnectionContext* ctx) {
    if (ctx->state == ConnectionState::LOGIN) {
        ((LoginPacketListener*) ctx->packetListener)->handleLoginStart(ctx, this);
    }
    delete this;
}