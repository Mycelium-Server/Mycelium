#pragma once

#include "packet.h"

class ClientboundLoginDisconnect : public ClientboundPacket {
 public:
  ClientboundLoginDisconnect();
  ~ClientboundLoginDisconnect();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  std::string reason;
};