#pragma once

#include "../server/world/chunk.h"
#include "packet.h"

class ClientboundSetCenterChunk : public ClientboundPacket {
 public:
  ClientboundSetCenterChunk();
  ~ClientboundSetCenterChunk();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  ChunkLocation location;
};