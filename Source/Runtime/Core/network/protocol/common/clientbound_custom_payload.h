#pragma once

#include "../packet.h"

class ClientboundCustomPayload : public ClientboundPacket {
 public:
  ClientboundCustomPayload();
  ~ClientboundCustomPayload();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  std::string channel;
  ByteBuffer data;
};