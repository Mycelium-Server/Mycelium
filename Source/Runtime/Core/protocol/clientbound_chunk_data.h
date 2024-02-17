#pragma once

#include "../server/world/chunk.h"
#include "packet.h"

class ClientboundChunkData : public ClientboundPacket {
 public:
  explicit ClientboundChunkData(Chunk*);
  ~ClientboundChunkData();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  Chunk* chunk = nullptr;
};