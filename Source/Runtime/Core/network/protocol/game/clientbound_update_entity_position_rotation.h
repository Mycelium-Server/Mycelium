#pragma once

#include "../packet.h"

class ClientboundUpdateEntityPositionRotation : public ClientboundPacket {
 public:
  ClientboundUpdateEntityPositionRotation();
  ~ClientboundUpdateEntityPositionRotation();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  Entity* entity = nullptr;
  EntityPosition position {};
};