#include "serverbound_login_start.h"

ServerboundLoginStart::ServerboundLoginStart() {

}

ServerboundLoginStart::~ServerboundLoginStart() {

}

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