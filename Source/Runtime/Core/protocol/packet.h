#pragma once

#include <memory>

#include "../byte_buffer.h"
#include "../connection_context.h"

class ServerboundPacket {
 public:
  ServerboundPacket();

 public:
  virtual void read(ByteBuffer&) = 0;
  virtual ServerboundPacket* createInstance() = 0;
  [[nodiscard]] virtual int getPacketID() const = 0;
  virtual void handle(ConnectionContext*) = 0;

 public:
  void registerPacket();

 public:
  static ServerboundPacket* createInstanceFromID(int, ConnectionState);
};

class ClientboundPacket {
 public:
  ClientboundPacket();

 public:
  virtual void write(ByteBuffer&) = 0;
  [[nodiscard]] virtual int getPacketID() const = 0;
};