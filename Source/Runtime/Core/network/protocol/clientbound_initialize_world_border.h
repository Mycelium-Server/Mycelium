#pragma once

#include "../../world/level/world_border.h"
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
  int64_t speed = 0;
};