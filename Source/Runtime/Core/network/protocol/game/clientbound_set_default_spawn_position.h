#pragma once

#include "../packet.h"

class ClientboundSetDefaultSpawnPosition : public ClientboundPacket {
 public:
  ClientboundSetDefaultSpawnPosition();
  ~ClientboundSetDefaultSpawnPosition();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  EntityPosition position {};
};