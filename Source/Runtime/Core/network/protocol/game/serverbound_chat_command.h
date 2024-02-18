#pragma once

#include "../packet.h"

class ServerboundChatCommand : public ServerboundPacket {
 public:
  struct SignedCommandArgument {
    std::string argument;
    ByteBuffer signature;
  };

 public:
  ServerboundChatCommand();
  ~ServerboundChatCommand();

 public:
  void read(ByteBuffer&) override;
  ServerboundPacket* createInstance() override;
  [[nodiscard]] int getPacketID() const override;
  void handle(ConnectionContext*) override;

 public:
  std::string command;
  uint64_t timestamp = 0;
  uint64_t salt = 0;
  std::vector<SignedCommandArgument> arguments;
  bool signedPreview = false;
};