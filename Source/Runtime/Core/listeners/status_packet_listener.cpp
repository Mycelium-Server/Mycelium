

#include "status_packet_listener.h"

#include <iostream>

#include "../network/protocol/clientbound_ping_response.h"
#include "../network/protocol/clientbound_status_response.h"

StatusPacketListener::StatusPacketListener() = default;
StatusPacketListener::~StatusPacketListener() = default;

void StatusPacketListener::handleStatusRequest(ConnectionContext* ctx, ServerboundStatusRequest*) {
  auto* response = new ClientboundStatusResponse();// TODO: Cache packet
  response->construct(ctx->gameServer);
  ctx->write(response);
  delete response;
}

void StatusPacketListener::handlePingRequest(ConnectionContext* ctx, ServerboundPingRequest* request) {
  auto* response = new ClientboundPingResponse();
  response->payload = request->payload;
  ctx->write(response);
  delete response;
}