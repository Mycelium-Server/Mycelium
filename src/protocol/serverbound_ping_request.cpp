#include "serverbound_ping_request.h"

ServerboundPingRequest::ServerboundPingRequest() {

}

ServerboundPingRequest::~ServerboundPingRequest() {

}

void ServerboundPingRequest::read(ByteBuffer& in) {
    payload = in.readLong();
}

ServerboundPacket* ServerboundPingRequest::createInstance() {
    return new ServerboundPingRequest();
}

int ServerboundPingRequest::getPacketID() const {
    return 0x01;
}