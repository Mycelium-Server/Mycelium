#pragma once

#include "../../location.h"
#include "packet.h"

class ClientboundSynchronizePlayerPosition : public ClientboundPacket {
 public:
  ClientboundSynchronizePlayerPosition();
  ~ClientboundSynchronizePlayerPosition();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  Location location {};
  union {
    struct {
      uint8_t isRelativeX : 1;
      uint8_t isRelativeY : 1;
      uint8_t isRelativeZ : 1;
      uint8_t isRelativeRotY : 1;
      uint8_t isRelativeRotX : 1;
      uint8_t unused : 3;
    };

    uint8_t value = 0;
  } flags {};
  int teleportId = 0;
  bool dismountVehicle = false;
};