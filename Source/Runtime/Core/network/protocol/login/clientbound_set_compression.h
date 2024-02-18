#pragma once

#include "../packet.h"

class ClientboundSetCompression : public ClientboundPacket {
 public:
  ClientboundSetCompression();
  ~ClientboundSetCompression();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  int threshold = 0;
};