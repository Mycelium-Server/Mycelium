#pragma once

#include "../../../server/difficulty.h"
#include "../packet.h"

class ClientboundChangeDifficulty : public ClientboundPacket {
 public:
  ClientboundChangeDifficulty();
  ~ClientboundChangeDifficulty();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  Difficulty difficulty = (Difficulty) 0;
  bool isLocked = false;
};