#include "clientbound_ping_response.h"

ClientboundPingResponse::ClientboundPingResponse() = default;
ClientboundPingResponse::~ClientboundPingResponse() = default;

void ClientboundPingResponse::write(ByteBuffer& out) {
    out.writeLong(payload);
}

int ClientboundPingResponse::getPacketID() const {
    return 0x01;
}

