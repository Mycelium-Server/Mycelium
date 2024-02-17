#pragma once

#include <filesystem>
#include <iostream>
#include <string>
#include <vector>

#include "../../ThirdParty/uuid.h"
#include "server/location.h"

struct ItemStack;

class ByteBuffer {
 public:
  ByteBuffer();
  explicit ByteBuffer(size_t);
  explicit ByteBuffer(const std::filesystem::path&);
  explicit ByteBuffer(const std::vector<uint8_t>&);
  ByteBuffer(const uint8_t*, size_t);

 public:
  uint8_t readByte();
  void writeByte(uint8_t);

  short readShort();
  void writeShort(short);

  int readInt();
  void writeInt(int);

  int64_t readLong();
  void writeLong(int64_t);

  std::string readString();
  void writeString(std::string);

  int readVarInt();
  void writeVarInt(int);

  int64_t readVarLong();
  void writeVarLong(int64_t);

  float readFloat();
  void writeFloat(float);

  double readDouble();
  void writeDouble(double);

  void writeItemStack(const ItemStack&);
  ItemStack readItemStack();

  void writeBlockPosition(const BlockPosition&);
  BlockPosition readBlockPosition();

  std::vector<uint8_t> readBytes(size_t);
  void writeBytes(std::vector<uint8_t>);
  void writeBytes(const uint8_t*, size_t);
  void writeBytes(ByteBuffer&, size_t);
  void writeBytes(ByteBuffer&);

  void writeUUID(const uuids::uuid&);

  void ensureWritableBytes(size_t);
  [[nodiscard]] size_t readableBytes() const;
  [[nodiscard]] size_t length() const;

 public:
  size_t readerIdx = 0;
  size_t writerIdx = 0;

  std::vector<uint8_t> data;
};