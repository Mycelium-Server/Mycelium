#include "clientbound_ping_response.h"

ClientboundPingResponse::ClientboundPingResponse() {

}

ClientboundPingResponse::~ClientboundPingResponse() {

}

void ClientboundPingResponse::write(ByteBuffer& out) {
    out.writeLong(payload);
}

int ClientboundPingResponse::getPacketID() const {
    return 0x01;
}

