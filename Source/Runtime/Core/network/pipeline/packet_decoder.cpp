

#include <iostream>

#include "../protocol/packet.h"
#include "handlers.h"

PacketDecoder::PacketDecoder() = default;
PacketDecoder::~PacketDecoder() = default;

bool PacketDecoder::onConnect(ConnectionContext*) {
  return true;
}

bool PacketDecoder::onDisconnect(ConnectionContext*) {
  return true;
}

bool PacketDecoder::decode(ConnectionContext* ctx, void* in, std::vector<void*>& out) {
  auto* inbuf = (ByteBuffer*) in;

  int packetId = inbuf->readVarInt();

  if (ctx->gameServer->debugPackets()) {
    std::cout << "[Thread " << std::this_thread::get_id() << "] < 0x" << std::hex << packetId << std::dec << std::endl;
  }

  ServerboundPacket* packet = ServerboundPacket::createInstanceFromID(packetId, ctx->state);
  if (packet) {
    packet->read(*inbuf);
    out.push_back(packet);
  }

  delete inbuf;

  return true;
}