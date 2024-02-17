#pragma once

#include "packet.h"

class ClientboundSetEntityMetadata : ClientboundPacket {
 public:
  ClientboundSetEntityMetadata();
  ~ClientboundSetEntityMetadata();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  Entity* entity = nullptr;
};