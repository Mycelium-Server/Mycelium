#pragma once

#include <memory>

#include "../../connection_context.h"
#include "../byte_buffer.h"

class Packet {

 public:
  [[nodiscard]] virtual int getPacketID() const = 0;
};

// TODO: merge into Packet class
class ServerboundPacket : public Packet {
 public:
  ServerboundPacket();

 public:
  virtual void read(ByteBuffer&) = 0;
  virtual ServerboundPacket* createInstance() = 0;
  virtual void handle(ConnectionContext*) = 0;

 public:
  void registerPacket();

 public:
  static ServerboundPacket* createInstanceFromID(int, ConnectionState);
};

// TODO: merge into Packet class
class ClientboundPacket : public Packet {
 public:
  ClientboundPacket();

 public:
  virtual void write(ByteBuffer&) = 0;
};