#pragma once

#include "../packet.h"

class ServerboundSwingArm : public ServerboundPacket {
 public:
  ServerboundSwingArm();
  ~ServerboundSwingArm();

 public:
  void read(ByteBuffer&) override;
  ServerboundPacket* createInstance() override;
  [[nodiscard]] int getPacketID() const override;
  void handle(ConnectionContext*) override;

 public:
  enum {
    MAIN_HAND = 0,
    OFF_HAND = 1,
  } hand;
};