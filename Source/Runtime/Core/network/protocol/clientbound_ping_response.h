#pragma once

#include "packet.h"

class ClientboundPingResponse : public ClientboundPacket {
 public:
  ClientboundPingResponse();
  ~ClientboundPingResponse();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  int64_t payload = 0;
};