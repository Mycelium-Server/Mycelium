#pragma once

#include "../server/location.h"
#include "packet.h"

class ServerboundSetPlayerPositionRotation : public ServerboundPacket {
 public:
  ServerboundSetPlayerPositionRotation();
  ~ServerboundSetPlayerPositionRotation();

 public:
  void read(ByteBuffer&) override;
  ServerboundPacket* createInstance() override;
  [[nodiscard]] int getPacketID() const override;
  void handle(ConnectionContext*) override;

 public:
  RotatedPosition3d location {};
  bool onGround = false;
};