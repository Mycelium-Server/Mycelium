#pragma once

#include "../packet.h"

class ClientboundSetHeldItem : public ClientboundPacket {
 public:
  ClientboundSetHeldItem();
  ~ClientboundSetHeldItem();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  uint8_t slot = 0;
};