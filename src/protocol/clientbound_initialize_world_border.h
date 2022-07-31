#pragma once

#include "../server/world/world_border.h"
#include "packet.h"

class ClientboundInitializeWorldBorder : public ClientboundPacket {
 public:
  ClientboundInitializeWorldBorder();
  ~ClientboundInitializeWorldBorder();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  WorldBorder old {};
  WorldBorder newBorder {};
  long long speed = 0;
};