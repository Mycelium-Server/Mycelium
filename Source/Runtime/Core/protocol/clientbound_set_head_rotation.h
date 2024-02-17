#pragma once

#include "packet.h"

class ClientboundSetHeadRotation : public ClientboundPacket {
 public:
  ClientboundSetHeadRotation();
  ~ClientboundSetHeadRotation();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;
  void construct(Entity*);

 public:
  Entity* entity = nullptr;
  float yaw = 0;
};