#pragma once

#include "packet.h"

class ServerboundHandshake : public ServerboundPacket {
 public:
  enum NextState {
    STATUS = 1,
    LOGIN = 2
  };

 public:
  ServerboundHandshake();
  ~ServerboundHandshake();

 public:
  void read(ByteBuffer&) override;
  ServerboundPacket* createInstance() override;
  [[nodiscard]] int getPacketID() const override;
  void handle(ConnectionContext* ctx) override;

 public:
  int protocolVersion = 0;
  std::string serverAddress;
  unsigned short serverPort = 0;
  NextState nextState = (NextState) 0;
};