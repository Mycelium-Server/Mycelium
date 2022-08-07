#pragma once

#include "../server/entity/entity.h"
#include "packet.h"

class ClientboundRemoveEntities : public ClientboundPacket {
 public:
  ClientboundRemoveEntities();
  ~ClientboundRemoveEntities();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  std::vector<Entity*> entities {};
};