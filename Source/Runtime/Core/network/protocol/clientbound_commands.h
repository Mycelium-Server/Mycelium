#pragma once

#include "packet.h"

class ClientboundCommands : public ClientboundPacket {
 public:
  ClientboundCommands();
  ~ClientboundCommands();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  CommandGraph* graph = nullptr;
  CommandNode* root = nullptr;
};