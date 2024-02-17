#pragma once

#include "packet.h"

class ServerboundCommandSuggestionRequest : public ServerboundPacket {
 public:
  ServerboundCommandSuggestionRequest();
  ~ServerboundCommandSuggestionRequest();

 public:
  void read(ByteBuffer&) override;
  ServerboundPacket* createInstance() override;
  [[nodiscard]] int getPacketID() const override;
  void handle(ConnectionContext*) override;

 public:
  int transactionID = 0;
  std::string text;
};