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

#include "ByteBuffer.h"

#include <cstring>

#include "server/itemstack.h"

ByteBuffer::ByteBuffer() = default;

ByteBuffer::ByteBuffer(size_t size) {
  data.resize(size);
  writerIdx = size;
}

ByteBuffer::ByteBuffer(const unsigned char* data, size_t len) {
  this->data = std::vector<unsigned char>(data, data + len);
  writerIdx = len;
}

ByteBuffer::ByteBuffer(const std::vector<unsigned char>& data) {
  this->data = std::vector<unsigned char>(data);
  writerIdx = data.size();
}

unsigned char ByteBuffer::readByte() {
  if (readerIdx >= writerIdx)
    return 0;
  return data[readerIdx++];
}

void ByteBuffer::writeByte(unsigned char b) {
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

long long ByteBuffer::readLong() {
  long long res = 0;
  for (int i = 0; i < sizeof(res); i++) {
    res <<= 8;
    res |= readByte();
  }
  return res;
}

void ByteBuffer::writeLong(long long value) {
  ensureWritableBytes(sizeof(value));
  int shift = sizeof(value) * 8;
  for (int i = 0; i < sizeof(value); i++) {
    shift -= 8;
    data[writerIdx++] = (value & ((long long) 0xFF << shift)) >> shift;
  }
}

std::string ByteBuffer::readString() {
  int len = readVarInt();
  return {(char*) readBytes(len).data(), (size_t) len};
}

void ByteBuffer::writeString(std::string str) {
  writeVarInt((int) str.size());
  writeBytes((unsigned char*) str.data(), str.size());
}

int ByteBuffer::readVarInt() {
  int value = 0;
  int position = 0;
  unsigned char current;
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
    value = (int) (((unsigned int) value) >> 7);
  }
}

long long ByteBuffer::readVarLong() {
  long long value = 0;
  int position = 0;
  unsigned char current;
  while (true) {
    current = readByte();
    value |= ((long long) (current & 0x7F)) << position;
    if ((current & 0x80) == 0)
      break;
    position += 7;
    if (position >= 64)
      return 0;
  }
  return value;
}

void ByteBuffer::writeVarLong(long long value) {
  while (true) {
    if ((value & ~((long long) 0x7F)) == 0) {
      writeByte(value & 0xFF);
      return;
    }
    writeByte(((value & 0x7F) | 0x80) & 0xFF);
    value = (long long) (((unsigned long long) value) >> 7);
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
  writeLong((long long) x);
}

std::vector<unsigned char> ByteBuffer::readBytes(size_t n) {
  std::vector<unsigned char> dst;
  dst.resize(n);
  for (size_t i = 0; i < n; i++)
    dst[i] = readByte();
  return dst;
}

void ByteBuffer::writeBytes(std::vector<unsigned char> buf) {
  writeBytes(buf.data(), buf.size());
}

void ByteBuffer::writeBytes(const unsigned char* buf, size_t n) {
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
  writeLong((long long) ((uint64_t*) uuidBytes.data())[0]);
  writeLong((long long) ((uint64_t*) uuidBytes.data())[1]);
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