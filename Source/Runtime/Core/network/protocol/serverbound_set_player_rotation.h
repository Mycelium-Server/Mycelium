#pragma once

#include "packet.h"

class ServerboundSetPlayerRotation : public ServerboundPacket {
 public:
  ServerboundSetPlayerRotation();
  ~ServerboundSetPlayerRotation();

 public:
  void read(ByteBuffer&) override;
  ServerboundPacket* createInstance() override;
  [[nodiscard]] int getPacketID() const override;
  void handle(ConnectionContext*) override;

 public:
  float yaw = 0;
  float pitch = 0;
  bool onGround = false;
};