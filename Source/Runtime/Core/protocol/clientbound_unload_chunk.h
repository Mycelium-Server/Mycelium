#pragma once

#include "../server/world/chunk.h"
#include "packet.h"

class ClientboundUnloadChunk : public ClientboundPacket {
 public:
  ClientboundUnloadChunk();
  ~ClientboundUnloadChunk();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  ChunkLocation location;
};