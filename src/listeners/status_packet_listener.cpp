#include "status_packet_listener.h"
#include "../protocol/clientbound_status_response.h"
#include "../protocol/clientbound_ping_response.h"
#include <iostream>

StatusPacketListener::StatusPacketListener() {

}

StatusPacketListener::~StatusPacketListener() {

}

void StatusPacketListener::handleStatusRequest(ConnectionContext* ctx, ServerboundStatusRequest* request) {
    ClientboundStatusResponse* response = new ClientboundStatusResponse(); // TODO: Cache packet
    response->construct(ctx->gameServer);
    ctx->write(response);
    delete response;
}

void StatusPacketListener::handlePingRequest(ConnectionContext* ctx, ServerboundPingRequest* request) {
    ClientboundPingResponse* response = new ClientboundPingResponse();
    response->payload = request->payload;
    ctx->write(response);
    delete response;
}