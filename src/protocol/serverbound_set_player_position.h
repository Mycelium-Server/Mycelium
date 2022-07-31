#pragma once

#include "../server/location.h"
#include "packet.h"

class ServerboundSetPlayerPosition : public ServerboundPacket {
 public:
  ServerboundSetPlayerPosition();
  ~ServerboundSetPlayerPosition();

 public:
  void read(ByteBuffer&) override;
  ServerboundPacket* createInstance() override;
  [[nodiscard]] int getPacketID() const override;
  void handle(ConnectionContext*) override;

 public:
  Position3d location {};
  bool onGround = false;
};