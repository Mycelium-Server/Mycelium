#pragma once

#include "packet.h"

class ClientboundEntityAnimation : public ClientboundPacket {
 public:
  ClientboundEntityAnimation();
  ~ClientboundEntityAnimation();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  Entity* target = nullptr;
  enum {
    SWING_MAIN_ARM = 0,
    TAKE_DAMAGE = 1,
    LEAVE_BED = 2,
    SWING_OFFHAND = 3,
    CRITICAL_EFFECT = 4,
    MAGIC_CRITICAL_EFFECT = 5,
  } animation = SWING_MAIN_ARM;
};