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

#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "uuid.h"

struct ItemStack;

class ByteBuffer {
 public:
  ByteBuffer();
  explicit ByteBuffer(size_t);
  explicit ByteBuffer(const std::vector<unsigned char>&);
  ByteBuffer(const unsigned char*, size_t);

 public:
  unsigned char readByte();
  void writeByte(unsigned char);

  short readShort();
  void writeShort(short);

  int readInt();
  void writeInt(int);

  long long readLong();
  void writeLong(long long);

  std::string readString();
  void writeString(std::string);

  int readVarInt();
  void writeVarInt(int);

  long long readVarLong();
  void writeVarLong(long long);

  float readFloat();
  void writeFloat(float);

  double readDouble();
  void writeDouble(double);

  void writeItemStack(const ItemStack&);
  ItemStack readItemStack();

  std::vector<unsigned char> readBytes(size_t);
  void writeBytes(std::vector<unsigned char>);
  void writeBytes(const unsigned char*, size_t);
  void writeBytes(ByteBuffer&, size_t);
  void writeBytes(ByteBuffer&);

  void writeUUID(const uuids::uuid&);

  void ensureWritableBytes(size_t);
  [[nodiscard]] size_t readableBytes() const;
  [[nodiscard]] size_t length() const;

 public:
  size_t readerIdx = 0;
  size_t writerIdx = 0;

  std::vector<unsigned char> data;
};