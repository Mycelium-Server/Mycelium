#pragma once

#include "../packet.h"

class ClientboundSuggestionsResponse : public ClientboundPacket {
 public:
  ClientboundSuggestionsResponse();
  ~ClientboundSuggestionsResponse();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  int transactionID = 0;
  int start = 0;
  int length = 0;
  std::unordered_map<std::string, std::optional<std::string>> matches;
};