#include "handlers.h"

PacketPrepender::PacketPrepender() = default;
PacketPrepender::~PacketPrepender() = default;

bool PacketPrepender::encode(ConnectionContext* ctx, void* in, void*& out) {
  auto* inbuf = (ByteBuffer*) in;
  auto* outbuf = new ByteBuffer();

  outbuf->writeVarInt((int) inbuf->readableBytes());
  outbuf->writeBytes(*inbuf);

  delete inbuf;

  out = outbuf;
  return true;
}