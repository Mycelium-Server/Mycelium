#pragma once

#include "packet.h"

class ClientboundUpdateEntityRotation : public ClientboundPacket {
 public:
  ClientboundUpdateEntityRotation();
  ~ClientboundUpdateEntityRotation();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;
  void construct(Entity*);

 public:
  Entity* entity = nullptr;
  float yaw = 0;
  float pitch = 0;
};