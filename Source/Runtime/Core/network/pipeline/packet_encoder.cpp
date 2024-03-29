

#include <iostream>

#include "../protocol/packet.h"
#include "handlers.h"

PacketEncoder::PacketEncoder() = default;
PacketEncoder::~PacketEncoder() = default;

bool PacketEncoder::encode(ConnectionContext* ctx, void* in, void*& out) {
  auto* dst = new ByteBuffer();
  auto* packet = (ClientboundPacket*) in;

  if (ctx->gameServer->debugPackets()) {
    std::cout << "[Thread " << std::this_thread::get_id() << "] > 0x" << std::hex << packet->getPacketID() << std::dec << std::endl;
  }

  dst->writeVarInt(packet->getPacketID());
  packet->write(*dst);
  out = dst;
  return true;
}