#pragma once

#include "../packet.h"

class ServerboundSetHeldItem : public ServerboundPacket {
 public:
  ServerboundSetHeldItem();
  ~ServerboundSetHeldItem();

 public:
  void read(ByteBuffer&) override;
  ServerboundPacket* createInstance() override;
  [[nodiscard]] int getPacketID() const override;
  void handle(ConnectionContext*) override;

 public:
  short slot = 0;

};