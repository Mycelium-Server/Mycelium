#pragma once

#include "packet.h"

class ClientboundBlockUpdate : public ClientboundPacket {
 public:
  ClientboundBlockUpdate();
  ~ClientboundBlockUpdate();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  BlockPosition location;
  int blockID = 0;
};