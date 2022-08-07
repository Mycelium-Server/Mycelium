#pragma once

#include "../server/entity/entity.h"
#include "packet.h"

class ClientboundUpdateEntityPosition : public ClientboundPacket {
 public:
  ClientboundUpdateEntityPosition();
  ~ClientboundUpdateEntityPosition();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  Entity* entity = nullptr;
  Position3d position {};
};