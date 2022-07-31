#pragma once

#include "packet.h"

class ServerboundKeepAlive : public ServerboundPacket {
 public:
  ServerboundKeepAlive();
  ~ServerboundKeepAlive();

 public:
  void read(ByteBuffer&) override;
  ServerboundPacket* createInstance() override;
  [[nodiscard]] int getPacketID() const override;
  void handle(ConnectionContext*) override;

 public:
  long long id = 0;
};