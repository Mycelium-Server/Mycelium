#pragma once

#include "../../location.h"
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
  EntityPosition location {};
  bool onGround = false;
};