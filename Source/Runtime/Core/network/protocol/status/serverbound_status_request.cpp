

#include "serverbound_status_request.h"

#include "../../../listeners/status_packet_listener.h"

ServerboundStatusRequest::ServerboundStatusRequest() = default;
ServerboundStatusRequest::~ServerboundStatusRequest() = default;

void ServerboundStatusRequest::read(ByteBuffer&) {
  // no fields
}

ServerboundPacket* ServerboundStatusRequest::createInstance() {
  return new ServerboundStatusRequest();
}

int ServerboundStatusRequest::getPacketID() const {
  return 0x00;
}

void ServerboundStatusRequest::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::STATUS) {
    ((StatusPacketListener*) ctx->packetListener)->handleStatusRequest(ctx, this);
  }
  delete this;
}