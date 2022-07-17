#include "serverbound_status_request.h"

ServerboundStatusRequest::ServerboundStatusRequest() {

}

ServerboundStatusRequest::~ServerboundStatusRequest() {

}

void ServerboundStatusRequest::read(ByteBuffer&) {
    // no fields
}

ServerboundPacket* ServerboundStatusRequest::createInstance() {
    return new ServerboundStatusRequest();
}

int ServerboundStatusRequest::getPacketID() const {
    return 0x00;
}