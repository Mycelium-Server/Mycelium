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

#include <memory>

#include "../ByteBuffer.h"
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