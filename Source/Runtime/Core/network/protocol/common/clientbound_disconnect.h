#pragma once

#include "../packet.h"

class ClientboundDisconnect : public ClientboundPacket {
 public:
  ClientboundDisconnect();
  ~ClientboundDisconnect();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  std::string reason;
};