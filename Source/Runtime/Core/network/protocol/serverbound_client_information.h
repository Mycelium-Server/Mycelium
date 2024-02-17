#pragma once

#include "packet.h"

class ServerboundClientInformation : public ServerboundPacket {
 public:
  ServerboundClientInformation();
  ~ServerboundClientInformation();

 public:
  void read(ByteBuffer&) override;
  ServerboundPacket* createInstance() override;
  [[nodiscard]] int getPacketID() const override;
  void handle(ConnectionContext*) override;

 public:
  ClientSettings settings;
};