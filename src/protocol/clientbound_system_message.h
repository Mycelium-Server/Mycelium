#pragma once

#include "../server/chat_type.h"
#include "packet.h"

class ClientboundSystemMessage : public ClientboundPacket {
 public:
  ClientboundSystemMessage();
  ~ClientboundSystemMessage();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  std::string message;
  ChatType type = (ChatType) 0;
};