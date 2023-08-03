/*
 * Mycelium
 * Copyright (C) 2022  JNNGL
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "byte_buffer.h"

#include <cstring>
#include <fstream>

#include "server/itemstack.h"

ByteBuffer::ByteBuffer() = default;

ByteBuffer::ByteBuffer(size_t size) {
  data.resize(size);
  writerIdx = size;
}

ByteBuffer::ByteBuffer(const uint8_t* data, size_t len) {
  this->data = std::vector<uint8_t>(data, data + len);
  writerIdx = len;
}

ByteBuffer::ByteBuffer(const std::filesystem::path& path) {
  std::ifstream file(path, std::ios_base::binary);

  file.seekg(0, std::ios_base::end);
  size_t length = file.tellg();
  file.seekg(0, std::ios_base::beg);

  data.reserve(length);
  std::copy(std::istreambuf_iterator<char>(file),
            std::istreambuf_iterator<char>(),
            std::back_inserter(data));
  writerIdx = length;
}

ByteBuffer::ByteBuffer(const std::vector<uint8_t>& data) {
  this->data = std::vector<uint8_t>(data);
  writerIdx = data.size();
}

uint8_t ByteBuffer::readByte() {
  if (readerIdx >= writerIdx)
    return 0;
  return data[readerIdx++];
}

void ByteBuffer::writeByte(uint8_t b) {
  ensureWritableBytes(1);
  data[writerIdx++] = b;
}

short ByteBuffer::readShort() {
  short res = 0;
  for (int i = 0; i < sizeof(res); i++) {
    res <<= 8;
    res |= readByte();
  }
  return res;
}

void ByteBuffer::writeShort(short value) {
  ensureWritableBytes(sizeof(value));
  int shift = sizeof(value) * 8;
  for (int i = 0; i < sizeof(value); i++) {
    shift -= 8;
    data[writerIdx++] = (value & (0xFF << shift)) >> shift;
  }
}

int ByteBuffer::readInt() {
  int32_t i = 0;
  for (int j = 0; j < 4; j++) {
    i <<= 8;
    i |= readByte();
  }
  return i;
}

void ByteBuffer::writeInt(int value) {
  ensureWritableBytes(sizeof(value));
  int shift = sizeof(value) * 8;
  for (int i = 0; i < sizeof(value); i++) {
    shift -= 8;
    data[writerIdx++] = (value & (0xFF << shift)) >> shift;
  }
}

int64_t ByteBuffer::readLong() {
  int64_t res = 0;
  for (int i = 0; i < sizeof(res); i++) {
    res <<= 8;
    res |= readByte();
  }
  return res;
}

void ByteBuffer::writeLong(int64_t value) {
  ensureWritableBytes(sizeof(value));
  int shift = sizeof(value) * 8;
  for (int i = 0; i < sizeof(value); i++) {
    shift -= 8;
    data[writerIdx++] = (value & ((int64_t) 0xFF << shift)) >> shift;
  }
}

std::string ByteBuffer::readString() {
  int len = readVarInt();
  return {(char*) readBytes(len).data(), (size_t) len};
}

void ByteBuffer::writeString(std::string str) {
  writeVarInt((int) str.size());
  writeBytes((uint8_t*) str.data(), str.size());
}

int ByteBuffer::readVarInt() {
  int value = 0;
  int position = 0;
  uint8_t current;
  while (true) {
    current = readByte();
    value |= (current & 0x7F) << position;
    if ((current & 0x80) == 0)
      break;
    position += 7;
    if (position >= 32)
      return 0;
  }
  return value;
}

void ByteBuffer::writeVarInt(int value) {
  while (true) {
    if ((value & ~((int) 0x7F)) == 0) {
      writeByte(value & 0xFF);
      return;
    }
    writeByte(((value & 0x7F) | 0x80) & 0xFF);
    value = (int) (((uint32_t) value) >> 7);
  }
}

int64_t ByteBuffer::readVarLong() {
  int64_t value = 0;
  int position = 0;
  uint8_t current;
  while (true) {
    current = readByte();
    value |= ((int64_t) (current & 0x7F)) << position;
    if ((current & 0x80) == 0)
      break;
    position += 7;
    if (position >= 64)
      return 0;
  }
  return value;
}

void ByteBuffer::writeVarLong(int64_t value) {
  while (true) {
    if ((value & ~((int64_t) 0x7F)) == 0) {
      writeByte(value & 0xFF);
      return;
    }
    writeByte(((value & 0x7F) | 0x80) & 0xFF);
    value = (int64_t) (((uint64_t) value) >> 7);
  }
}

float ByteBuffer::readFloat() {
  uint32_t buf = readInt();
  float x;
  memcpy(&x, &buf, sizeof(float));
  return x;
}

void ByteBuffer::writeFloat(float value) {
  uint32_t x;
  memcpy(&x, &value, sizeof(float));
  writeInt((int) x);
}

double ByteBuffer::readDouble() {
  uint64_t buf = readLong();
  double x;
  memcpy(&x, &buf, sizeof(double));
  return x;
}

void ByteBuffer::writeDouble(double value) {
  uint64_t x;
  memcpy(&x, &value, sizeof(double));
  writeLong((int64_t) x);
}

std::vector<uint8_t> ByteBuffer::readBytes(size_t n) {
  std::vector<uint8_t> dst;
  dst.resize(n);
  for (size_t i = 0; i < n; i++)
    dst[i] = readByte();
  return dst;
}

void ByteBuffer::writeBytes(std::vector<uint8_t> buf) {
  writeBytes(buf.data(), buf.size());
}

void ByteBuffer::writeBytes(const uint8_t* buf, size_t n) {
  ensureWritableBytes(n);
  for (size_t i = 0; i < n; i++) {
    this->data[writerIdx++] = buf[i];
  }
}

void ByteBuffer::writeBytes(ByteBuffer& buf, size_t s) {
  ensureWritableBytes(s);
  for (size_t i = 0; i < s; i++)
    data[writerIdx++] = buf.readByte();
}

void ByteBuffer::writeBytes(ByteBuffer& buf) {
  writeBytes(buf, buf.readableBytes());
}

void ByteBuffer::writeUUID(const uuids::uuid& uuid) {
  uuids::span<std::byte const, 16> uuidBytes = uuid.as_bytes();
  writeLong((int64_t) ((uint64_t*) uuidBytes.data())[0]);
  writeLong((int64_t) ((uint64_t*) uuidBytes.data())[1]);
}

void ByteBuffer::writeItemStack(const ItemStack& value) {
  writeByte(value.present);
  if (value.present) {
    writeVarInt(value.itemID);
    writeByte(value.itemCount);
    if (value.nbt.has_value()) {
      ByteBuffer nbt = value.nbt.value()->asByteBuffer();
      writeBytes(nbt);
    } else {
      writeByte(0);
    }
  }
}

ItemStack ByteBuffer::readItemStack() {
  ItemStack is {};
  is.present = readByte();
  if (is.present) {
    is.itemID = readVarInt();
    is.itemCount = readByte();
    std::shared_ptr<NBT_Component> nbt = read_nbt(*this);
    if (nbt->getType() != Type_TAG_End) {
      is.nbt = nbt;
    }
  }
  return is;
}

void ByteBuffer::writeBlockPosition(const BlockPosition& pos) {
  uint64_t val = 0;
  val |= (pos.x & 0x3FFFFFFull) << 38;
  val |= (pos.z & 0x3FFFFFFull) << 12;
  val |= (pos.y & 0x3FFFull);
  writeLong((int64_t) val);
}

BlockPosition ByteBuffer::readBlockPosition() {
  auto val = (uint64_t) readLong();
  BlockPosition pos;
  pos.x = (int) (val >> 38);
  pos.y = (int) (val & 0xFFF);
  pos.z = (int) ((val >> 12) & 0x3FFFFFF);

  if (pos.x >= (1 << 25)) {
    pos.x -= 1 << 26;
  }

  if (pos.y >= (1 << 11)) {
    pos.y -= 1 << 12;
  }

  if (pos.z >= (1 << 25)) {
    pos.z -= 1 << 26;
  }

  return pos;
}

void ByteBuffer::ensureWritableBytes(size_t n) {
  if (data.size() < n + writerIdx)
    data.resize(writerIdx + n);
}

size_t ByteBuffer::readableBytes() const {
  return writerIdx - readerIdx;
}

size_t ByteBuffer::length() const {
  return data.size();
}