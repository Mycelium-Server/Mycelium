

#include "serverbound_ping_request.h"

#include "../listeners/status_packet_listener.h"

ServerboundPingRequest::ServerboundPingRequest() = default;
ServerboundPingRequest::~ServerboundPingRequest() = default;

void ServerboundPingRequest::read(ByteBuffer& in) {
  payload = in.readLong();
}

ServerboundPacket* ServerboundPingRequest::createInstance() {
  return new ServerboundPingRequest();
}

int ServerboundPingRequest::getPacketID() const {
  return 0x01;
}

void ServerboundPingRequest::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::STATUS) {
    ((StatusPacketListener*) ctx->packetListener)->handlePingRequest(ctx, this);
  }
  delete this;
}